#include <iostream>
using namespace std;

// pass by value not effect the actual parameter;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}

int main()
{
    int x = 10, y = 20;

    swap(x, y);

    cout << x << " " << y;

    return 0;
}