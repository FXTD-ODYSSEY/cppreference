// cplusplus link https://cplusplus.com/reference/initializer_list\initializer_list
struct myclass {
    myclass(int, int);
    myclass(initializer_list<int>);
    /* definitions ... */
};

myclass foo { 10, 20 }; // calls initializer_list ctor
myclass bar(10, 20); // calls first constructor
