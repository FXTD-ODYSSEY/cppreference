// cppreference link https://en.cppreference.com/w/cpp/io/ios_base/register_callback
#include <functional>
#include <iostream>
#include <locale>

// cached locale-specific message and its hash
typedef std::pair<std::string, std::size_t> cache_t;

// populate the cached message and its hash from the locale
void update_cache(cache_t& cache, std::locale loc)
{
    auto& fct = std::use_facet<std::messages<char>>(loc);
    std::messages_base::catalog cat = fct.open("sed", loc);
    cache.first = cat < 0 ? "" : fct.get(cat, 0, 0, "Memory exhausted");
    cache.second = std::hash<std::string>()(cache.first);
}

// update the cache if the locale changed
void true_callback(std::ios_base::event evt, std::ios_base& str, int idx)
{
    if (evt == std::ios_base::imbue_event) {
        cache_t* ptr = static_cast<cache_t*>(str.pword(idx));
        update_cache(*ptr, str.getloc());
    }
}

// registers the cache in pword() and sets up the callback
struct CacheSetup {
    CacheSetup(std::ostream& os, std::ios_base::event_callback f, cache_t* cache)
    {
        int index = std::ostream::xalloc();
        os.pword(index) = cache; // store pointer to cache in the stream
        os.register_callback(f, index); // store callback and the index to the pointer
        update_cache(*cache, os.getloc()); // initialize cache
    };
};

// some custom class
struct S { };
// some custom class's operator<< that needs fast access to hashed message
std::ostream& operator<<(std::ostream& os, const S&)
{
    static cache_t cache;
    static CacheSetup setup(os, true_callback, &cache);
    return os << cache.first << ": " << cache.second;
}

int main()
{
    std::locale loc("en_US.utf8");

    S s;
    std::cout.imbue(loc);
    std::cout << s << '\n';

    std::cout.imbue(std::locale(loc, new std::messages_byname<char>("de_DE.utf8")));
    std::cout << s << '\n';

    std::cout.imbue(std::locale(loc, new std::messages_byname<char>("ja_JP.utf8")));
    std::cout << s << '\n';

    std::cout.imbue(std::locale(loc, new std::messages_byname<char>("ru_RU.utf8")));
    std::cout << s << '\n';
}
