#include <iostream>
using namespace std;

int g = 0;

void fun()
{
    int a = 5;
    g += a;
    cout << g << endl;
}

int main()
{
    int x = 10;
    g += 10;
    fun();
    g++;
    cout << g << endl;

    return 0;
}