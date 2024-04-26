#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 0, c;

    try
    {
        if (b == 0)
            throw 1;
        c = a / b;
        cout << c << endl;
    }
    catch (int e)
    {
        cerr << "not devide by zero error:" << e << '\n';
    }

    return 0;
}