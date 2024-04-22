#include <iostream>
using namespace std;
class Base
{
public:
    void fun1() {}
    void fun2() {}
    void fun3() {}
};
class Derived : public Base
{
public:
    void fun4() {}
    void fun5() {}
};

int main()
{
    Base *p = new Derived();
    p->fun1();
    p->fun2();
    p->fun3(); // fun 5,6 are not called because of base class pointer
               // also derived class pointer can not old base class object;
    return 0;
}