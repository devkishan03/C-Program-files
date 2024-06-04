#include <iostream>
using namespace std;

class Fraction
{
private:
    int n;
    int d;

public:
    Fraction()
    {
        n = d = 0;
    }
    Fraction(int f)
    {
        n = d = f;
    }
    Fraction(int numerator, int denominator)
    {
        n = numerator;
        d = denominator;
    }

    Fraction operator-(Fraction &obj)
    {
        Fraction temp;
        temp.n = (n * obj.d) - (d * obj.n);
        temp.d = d * obj.d;
        return temp;
    }
    bool operator==(Fraction &obj)
    {
        return (n * obj.d) == (d * obj.n);
    }
    friend ostream &operator<<(ostream &o, Fraction &obj);
};
ostream &operator<<(ostream &o, Fraction &obj)
{
    o << obj.n << "/" << obj.d;
    return o;
}
int main()
{
    Fraction f1(2, 3);
    Fraction f2(3);
    Fraction f3(2, 3);

    Fraction f4;

    f4 = f1 - f2;
    cout << f4 << endl;
    bool a = f2 == f2;
    cout << a;
    return 0;
}