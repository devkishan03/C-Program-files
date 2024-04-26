#include <iostream>
using namespace std;

class Test
{
private:
    int a = 10;

protected:
    int b = 16;

public:
    int c = 12;

    friend void fun1();
};

void fun1()
{
    Test t;
    cout << t.a << endl;
    cout << t.b << endl;
    cout << t.c << endl;
}

int main()
{

    fun1();
    return 0;
}