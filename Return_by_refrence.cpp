#include <iostream>
using namespace std;

int &fun(int &a)
{
    cout << a << endl;
    cout << &a << endl;
    return a;
}

int main()
{
    int x = 10;
    fun(x) = 25;
    cout << &x << endl;
    cout << x << endl;

    return 0;
}