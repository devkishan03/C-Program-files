#include <iostream>
using namespace std;
// int v=0;
void fun2()
{
    static int v = 0;
    int a = 5;
    v++;
    cout << a << " " << v << endl;
}

int main()
{
    fun2();
    fun2();
    fun2();

    return 0;
}