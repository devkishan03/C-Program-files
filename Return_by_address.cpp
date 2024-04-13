#include <iostream>
using namespace std;

int *fun(int size)
{
    int *p = new int[5];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    cout << p << endl;
    return p;
}

int main()
{
    int *q = fun(5);
    cout << q << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << q[i] << endl;
    }

    return 0;
}