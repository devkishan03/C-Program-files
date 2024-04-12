#include <iostream>
using namespace std;

// call by refrence effect the actual parameter;
void swap(int &a, int &b) // pass them refrence of the values
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

    swap(x, y); // here function code will copy to main functin
                // each time call these refrenced function

    cout << x << " " << y;

    return 0;
}