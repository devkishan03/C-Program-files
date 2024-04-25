#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun1()
    {
        cout << "base class fun1" << endl;
    }

    void fun2()
    {
        cout << "base class fun2" << endl;
    }
};
class Derived : public Base
{
public:
    void fun1()
    {
        cout << "Derived class fun1" << endl;
    }
    void fun3()
    {
        cout << "Derived class fun2" << endl;
    }
};
class Derived2 : public Base
{
public:
    void fun1()
    {
        cout << "Derived2 class fun1" << endl;
    }
    void fun4()
    {
        cout << "Derived2 class fun 4" << endl;
    }
};
int main()
{

    Base *v = new Derived2();
    Base *p = new Derived();
    v->fun1();
    p->fun1();

    return 0;
}
