#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Point
{
private:
    double x;
    double y;

public:
    Point()
    {
        x = y = 0;
    }
    Point(double x, double y)
    {
        this->x = x;
        this->y = y;
    }

    double getDistanceFrom(Point &other)
    {
        try
        {
            return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
};

class SimplePolygone
{
protected:
    vector<Point> pts;

public:
    SimplePolygone(Point obj[], int numofPoints) // numofPoints will give how many points have that polygone
    {
        for (int i = 0; i < numofPoints; i++)
        {
            pts.push_back(obj[i]);
        }
    }

    virtual double getPerimeter()
    {
        double perimeter = 0.0;
        int n = pts.size();
        for (int i = 0; i < n; i++)
        {
            perimeter += pts[i].getDistanceFrom(pts[(i + 1) % n]);
        }
        return perimeter;
    }
};

class Triangle : public SimplePolygone
{
private:
    bool isEquilateral;

public:
    Triangle(Point obj[], int numofobj, bool isEqui) : SimplePolygone(obj, numofobj)
    {
        isEquilateral = isEqui;
    }

    double getPerimeter()
    {
        if (isEquilateral)
        {
            double perimeter = pts[0].getDistanceFrom(pts[1]);
            return perimeter * 3;
        }
        else
        {
            SimplePolygone::getPerimeter();
        }
    }
};

int main()
{
    Point p1(2, 2);
    Point p2(6, 2);
    Point p3(3, 4);
    Point *p = new Point[3];
    p[0] = p1;
    p[1] = p2;
    p[2] = p3;
    SimplePolygone s(p, 3);
    cout << s.getPerimeter() << endl;
    Triangle sp(p, 3, true);
    Triangle tp(p, 3, false);
    // cout << p1.getDistanceFrom(p2) << endl;
    //  cout << p2.getDistanceFrom(p3) << endl;
    // cout << p3.getDistanceFrom(p1);
    // cout << sp.getPerimeter() << endl;
    cout << tp.getPerimeter();

    return 0;
}