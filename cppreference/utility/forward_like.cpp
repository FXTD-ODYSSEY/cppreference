// cppreference link https://en.cppreference.com/w/cpp/utility/forward_like
#include <cstddef>
#include <iostream>
#include <memory>
#include <optional>
#include <type_traits>
#include <utility>
#include <vector>

struct TypeTeller {
    void operator()(this auto&& self)
    {
        using SelfType = decltype(self);
        using UnrefSelfType = std::remove_reference_t<SelfType>;
        if constexpr (std::is_lvalue_reference_v<SelfType>) {
            if constexpr (std::is_const_v<UnrefSelfType>)
                std::cout << "const lvalue\n";
            else
                std::cout << "mutable lvalue\n";
        } else {
            if constexpr (std::is_const_v<UnrefSelfType>)
                std::cout << "const rvalue\n";
            else
                std::cout << "mutable rvalue\n";
        }
    }
};

struct FarStates {
    std::unique_ptr<TypeTeller> ptr;
    std::optional<TypeTeller> opt;
    std::vector<TypeTeller> container;

    auto&& from_opt(this auto&& self)
    {
        return std::forward_like<decltype(self)>(self.opt.value());
        // It is OK to use std::forward<decltype(self)>(self).opt.value(),
        // because std::optional provides suitable accessors.
    }

    auto&& operator[](this auto&& self, std::size_t i)
    {
        return std::forward_like<decltype(self)>(container.at(i));
        // It is not so good to use std::forward<decltype(self)>(self)[i],
        // because containers do not provide rvalue subscript access, although they could.
    }

    auto&& from_ptr(this auto&& self)
    {
        if (!self.ptr)
            throw std::bad_optional_access {};
        return std::forward_like<decltype(self)>(*self.ptr);
        // It is not good to use *std::forward<decltype(self)>(self).ptr,
        // because std::unique_ptr<TypeTeller> always deferences to a non-const lvalue.
    }
};

int main()
{
    FarStates my_state {
        .ptr { std::make_unique<TypeTeller>() },
        .opt { std::in_place, TypeTeller {} },
        .container { std::vector<TypeTeller>(1) },
    };

    my_state.from_ptr();
    my_state.from_opt();
    my_state[0]();

    std::cout << '\n';

    std::as_const(my_state).from_ptr();
    std::as_const(my_state).from_opt();
    std::as_const(my_state)[0]();

    std::cout << '\n';

    std::move(my_state).from_ptr();
    std::move(my_state).from_opt();
    std::move(my_state)[0]();

    std::cout << '\n';

    std::move(std::as_const(my_state)).from_ptr();
    std::move(std::as_const(my_state)).from_opt();
    std::move(std::as_const(my_state))[0]();

    std::cout << '\n';
}
