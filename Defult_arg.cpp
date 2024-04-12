#include <iostream>
using namespace std;

int max(int x = 0, int y = 0, int z = 0) // from right side make defult but not skip middle one
{
    return (x > y && x > z) ? x : (y > z) ? y
                                          : z;
}

int add(int a, int b, int c = 0, int d = 0)
{
    return a + b + c + d;
}

int main()
{
    cout << add(2, 4) << endl;
    cout << add(2, 4, 6) << endl;
    cout << add(2, 4, 6, 8) << endl; // one function multiple argument;

    cout << max() << endl; // can make empty argument by making all defult values;
    cout << max(10) << endl;
    cout << max(12, 15) << endl;
    cout << max(10, 18, 15) << endl;
    return 0;
}