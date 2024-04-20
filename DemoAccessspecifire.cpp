#include <iostream>
using namespace std;

class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funBase()
    {
        a = 1;
        b = 2;
        c = 3;
    }
};

class Derived : Base
{
public:
    void funDerived()
    {
        // a = 4;   //not access
        b = 5;
        c = 6;
    }
};

int main()
{
    Base b;

    // b.a = 10; // not access
    //  b.b = 12;  // not access
    b.c = 15;

    return 0;
}