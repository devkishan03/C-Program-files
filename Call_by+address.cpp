#include <iostream>
using namespace std;

// pass by address effect the actual parameter;
void swap(int *a, int *b) // now a and b will pointer
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << *a << " " << *b << endl;
}

int main()
{
    int x = 10, y = 20;

    swap(&x, &y); // now we send the address of these variables;

    cout << x << " " << y;

    return 0;
}