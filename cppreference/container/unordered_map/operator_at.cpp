// cppreference link https://en.cppreference.com/w/cpp/container/unordered_map/operator_at
#include <iostream>
#include <string>
#include <unordered_map>

auto print = [](auto const comment, auto const& map) {
    std::cout << comment << "{";
    for (const auto& pair : map) {
        std::cout << "{" << pair.first << ": " << pair.second << "}";
    }
    std::cout << "}\n";
};

int main()
{
    std::unordered_map<char, int> letter_counts { { 'a', 27 }, { 'b', 3 }, { 'c', 1 } };

    print("letter_counts initially contains: ", letter_counts);

    letter_counts['b'] = 42; // updates an existing value
    letter_counts['x'] = 9; // inserts a new value

    print("after modifications it contains: ", letter_counts);

    // count the number of occurrences of each word
    // (the first call to operator[] initialized the counter with zero)
    std::unordered_map<std::string, int> word_map;
    for (const auto& w : { "this", "sentence", "is", "not", "a", "sentence",
             "this", "sentence", "is", "a", "hoax" }) {
        ++word_map[w];
    }
    word_map["that"]; // just inserts the pair {"that", 0}

    for (const auto& [word, count] : word_map) {
        std::cout << count << " occurrences of word '" << word << "'\n";
    }
}
