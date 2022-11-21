// cppreference link https://en.cppreference.com/w/cpp/language/operator_alternative
%:include <iostream>

struct X <%
    compl X() <% %> // destructor
    X() <% %>
    X(const X bitand) = delete; // copy constructor
    // X(X and) = delete; // move constructor

    bool operator not_eq(const X bitand other)
    <%
        return this not_eq bitand other;
    %>
%>;

int main(int argc, char* argv<::>)
<%
    // lambda with reference-capture:
    auto greet = <:bitand:>(const char* name) <%
        std::cout << "Hello " << name
                  << " from " << argv<:0:> << '\n';
    %>;

    if (argc > 1 and argv<:1:> not_eq nullptr) <%
        greet(argv<:1:>);
    %> else <%
        greet("Anon");
    %>
%>
