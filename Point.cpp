#include <iostream>
using namespace std;
class Rectangle;
class Point
{
private:
    int x;
    int y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    friend Rectangle;
};
class Rectangle
{
private:
    Point p[4];
    int length;
    int bredth;

public:
    Rectangle(Point topLeft, Point topRight, Point bottomRight, Point bottomLeft)
    {
        p[0].x = topLeft.x;
        p[0].y = topLeft.y;
        p[1].x = topRight.x;
        p[1].y = topRight.y;
        p[2].x = bottomRight.x;
        p[2].y = bottomRight.y;
        p[3].x = bottomLeft.x;
        p[3].y = bottomLeft.y;
    }

    int perimeter()
    {
        int width1 = p[1].x - p[0].x;
        int Width2 = p[2].x - p[3].x;
        int height1 = p[0].y - p[3].y;
        int height2 = p[1].y - p[2].y;

        return width1 + Width2 + height1 + height2;
    }
    double area()
    {
        int width1 = p[1].x - p[0].x;
        int Width2 = p[2].x - p[3].x;
        int height1 = p[0].y - p[3].y;
        int height2 = p[1].y - p[2].y;

        return (double)((width1 + Width2) / 2) * ((height1 + height2) / 2);
    }
};

int main()
{
    Point tl(4, 8);
    Point tr(8, 8);
    Point br(8, 2);
    Point bl(4, 2);

    Rectangle r(tl, tr, br, bl);
    cout << r.area() << endl;
    cout << r.perimeter() << endl;
}