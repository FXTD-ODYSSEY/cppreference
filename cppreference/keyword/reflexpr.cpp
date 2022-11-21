// cppreference link https://en.cppreference.com/w/cpp/keyword/reflexpr
namespace Foo {
struct FooFoo {
    int FooFooFoo
};
}
namespace Bar {
using BarBar = ::Foo::FooFoo;
}
using BarBarInfo = reflexpr(::Bar::BarBar);
using BarBarScope = ::std::experimental::reflect::get_scope_t<BarBarInfo>; // Bar, not Foo

struct Spam {
    int SpamSpam;
};
struct Grok {
    using GrokGrok = Spam::SpamSpam;
};
using GrokGrokInfo = reflexpr(::Grok::GrokGrok);
using GrokGrokScope = std::experimental::reflect::get_scope_t<GrokGrokInfo>; // Grok, not Spam
