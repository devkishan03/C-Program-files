#include <iostream>
using namespace std;

class Base
{

public:
    int value;

    Base()
    {
        cout << "non param of base class" << endl;
    }
    Base(int x)
    {
        value = x;
        cout << "paramitarized of Base class " << value << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "non paramitarizes of derived class" << endl;
    }
    Derived(int x)
    {
        cout << "paramitarized of derived class " << x << endl;
    }
    Derived(int x, int y) : Base(x)
    {
        cout << "paramitarized of derived class " << y << endl;
    }
};

int main()
{
    //  Base b;
    // Base b2(2);

    // Derived d;
    //  Derived d2(4);
    Derived d3(2, 5);

    return 0;
}