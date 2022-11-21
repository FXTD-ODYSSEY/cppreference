// cppreference link https://en.cppreference.com/w/cpp/types/type_info/operator_cmp
#include <iostream>
#include <string>
#include <typeinfo>
#include <utility>

class person {
public:
    person(std::string n)
        : name_(std::move(n))
    {
    }
    virtual const std::string& name() const { return name_; }

private:
    std::string name_;
};

class employee : public person {
public:
    employee(std::string n, std::string p)
        : person(std::move(n))
        , profession_(std::move(p))
    {
    }

    const std::string& profession() const { return profession_; }

private:
    std::string profession_;
};

void print_info(const person& p)
{
    if (typeid(person) == typeid(p)) {
        std::cout << p.name() << " is not an employee\n";
    } else if (typeid(employee) == typeid(p)) {
        std::cout << p.name() << " is an employee ";
        auto& emp = dynamic_cast<const employee&>(p);
        std::cout << "who works in " << emp.profession() << '\n';
    }
}

int main()
{
    print_info(employee { "Paul", "Economics" });
    print_info(person { "Kate" });

    if constexpr (typeid(employee) != typeid(person)) // C++23
    {
        std::cout << "class `employee`!= class `person`\n";
    }
}
