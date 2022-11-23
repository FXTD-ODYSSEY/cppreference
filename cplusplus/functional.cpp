// cplusplus link https://cplusplus.com/reference/functional
struct myclass {
    int operator()(int a) { return a; }
} myobject;
int x = myobject(0); // function-like syntax with object myobject
