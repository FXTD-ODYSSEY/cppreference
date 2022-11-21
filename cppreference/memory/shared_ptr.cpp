// cppreference link https://en.cppreference.com/w/cpp/memory/shared_ptr
#include <iostream>
#include <memory>

struct MyObj {
    MyObj()
    {
        std::cout << "MyObj construced" << std::endl;
    }

    ~MyObj()
    {
        std::cout << "MyObj destructed" << std::endl;
    }
};

struct Container : std::enable_shared_from_this<Container> // note: public inheritance
{
    void CreateMember()
    {
        memberObj = std::make_shared<MyObj>();
    }
    std::shared_ptr<MyObj> memberObj;

    std::shared_ptr<MyObj> GetAsMyObj()
    {
        // Use an alias shared ptr for member
        return std::shared_ptr<MyObj>(shared_from_this(), memberObj.get());
    }
};

void test()
{

    std::shared_ptr<Container> cont = std::make_shared<Container>();
    std::cout << "cont.use_count() = " << cont.use_count() << '\n';
    std::cout << "cont.memberObj.use_count() = " << cont->memberObj.use_count() << '\n';

    std::cout << "Creating member\n\n";
    cont->CreateMember();
    std::cout << "cont.use_count() = " << cont.use_count() << '\n';
    std::cout << "cont.memberObj.use_count() = " << cont->memberObj.use_count() << '\n';

    std::cout << "Creating another shared container\n\n";
    std::shared_ptr<Container> cont2 = cont;
    std::cout << "cont.use_count() = " << cont.use_count() << '\n';
    std::cout << "cont.memberObj.use_count() = " << cont->memberObj.use_count() << '\n';
    std::cout << "cont2.use_count() = " << cont2.use_count() << '\n';
    std::cout << "cont2.memberObj.use_count() = " << cont2->memberObj.use_count() << '\n';

    std::cout << "GetAsMyObj\n\n";
    std::shared_ptr<MyObj> myobj1 = cont->GetAsMyObj();
    std::cout << "myobj1.use_count() = " << myobj1.use_count() << '\n';
    std::cout << "cont.use_count() = " << cont.use_count() << '\n';
    std::cout << "cont.memberObj.use_count() = " << cont->memberObj.use_count() << '\n';
    std::cout << "cont2.use_count() = " << cont2.use_count() << '\n';
    std::cout << "cont2.memberObj.use_count() = " << cont2->memberObj.use_count() << '\n';

    std::cout << "copying alias obj\n\n";
    std::shared_ptr<MyObj> myobj2 = myobj1;
    std::cout << "myobj1.use_count() = " << myobj1.use_count() << '\n';
    std::cout << "myobj2.use_count() = " << myobj2.use_count() << '\n';

    std::cout << "cont.use_count() = " << cont.use_count() << '\n';
    std::cout << "cont.memberObj.use_count() = " << cont->memberObj.use_count() << '\n';
    std::cout << "cont2.use_count() = " << cont2.use_count() << '\n';
    std::cout << "cont2.memberObj.use_count() = " << cont2->memberObj.use_count() << '\n';

    std::cout << "Resetting cont2\n\n";
    cont2.reset();
    std::cout << "myobj1.use_count() = " << myobj1.use_count() << '\n';
    std::cout << "myobj2.use_count() = " << myobj2.use_count() << '\n';

    std::cout << "cont.use_count() = " << cont.use_count() << '\n';
    std::cout << "cont.memberObj.use_count() = " << cont->memberObj.use_count() << '\n';

    std::cout << "Resetting myobj2\n\n";
    myobj2.reset();
    std::cout << "myobj1.use_count() = " << myobj1.use_count() << '\n';
    std::cout << "cont.use_count() = " << cont.use_count() << '\n';
    std::cout << "cont.memberObj.use_count() = " << cont->memberObj.use_count() << '\n';

    std::cout << "Resetting cont\n\n";
    cont.reset();
    std::cout << "myobj1.use_count() = " << myobj1.use_count() << '\n';

    std::cout << "cont.use_count() = " << cont.use_count() << '\n';
}

int main()
{
    test();
}
