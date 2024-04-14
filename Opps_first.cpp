#include <iostream>
using namespace std;
class Ractangle
{
public:
    int length;
    int bredth;

    int area()
    {
        return length * bredth;
    }

    int perimeter()
    {
        return 2 * (length + bredth);
    }
};

int main()
{
    Ractangle r1, r2;

    r1.length = 10;
    r1.bredth = 5;

    r2.length = 15;
    r2.bredth = 20;

    cout << r1.area() << endl;
    cout << r2.area() << endl;

    return 0;
}