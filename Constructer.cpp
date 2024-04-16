#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double bredth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setBredth(b);
    }

    void setLength(int l)
    {
        length = l;
    }
    void setBredth(int b)
    {
        bredth = b;
    }

    double getLength()
    {
        return length;
    }
    double getBredth()
    {
        return bredth;
    }

    double area()
    {
        return length * bredth;
    }
    double perimeter();
};

double Rectangle::perimeter()
{
    return 2 * (length + bredth);
}

int main()
{
    Rectangle r(10, 5);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;

    return 0;
}