#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        setLength(l);
        setbreadth(b);
    }

    void setLength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }

    int getLength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }

    int area();
    int perimeter();
};

int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int l = 0, int b = 0, int h = 0)
    {
        setLength(l);
        setbreadth(b);
        setHeight(h);
    }
    void setHeight(int h)
    {
        height = h;
    }
    int getHeight()
    {
        return height;
    }

    int volume();
};

int Cuboid::volume()
{
    return getLength() * getbreadth() * getHeight();
}

int main()
{
    Rectangle r(15, 8);
    Cuboid c(10, 5, 5);

    cout << r.area() << endl;
    cout << r.perimeter() << endl;
    cout << c.area() << endl;
    cout << c.perimeter() << endl;
    cout << c.volume() << endl;

    return 0;
}