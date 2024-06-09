#include <iostream>
#include <cmath>
using namespace std;

class ComplexNumber
{
private:
    int real;
    int imaginary;

public:
    ComplexNumber() {}
    ComplexNumber(int r, int i)
    {
        real = r;
        imaginary = i;
    }

    ComplexNumber &operator=(ComplexNumber &obj)
    {
        real = obj.real;
        imaginary = obj.imaginary;
        return *this;
    }
    ComplexNumber operator*(ComplexNumber &obj)
    {
        ComplexNumber temp;
        temp.real = real * obj.real;
        temp.imaginary = imaginary * obj.imaginary;
        return temp;
    }
    bool operator==(ComplexNumber &obj)
    {
        return ((real == obj.real) && (imaginary == obj.imaginary));
    }
    bool operator>(ComplexNumber &obj)
    {
        return (pow(real, 2) + pow(imaginary, 2)) > (pow(obj.real, 2) + pow(obj.imaginary, 2));
    }
    friend ostream &operator<<(ostream &o, ComplexNumber &obj);
};
ostream &operator<<(ostream &o, ComplexNumber &obj)
{
    o << obj.real << "+i" << obj.imaginary;
    return o;
}

int main()
{
    ComplexNumber c(2, 4);
    ComplexNumber c2(3, 5);
    ComplexNumber c3 = c * c2;
    cout << c3 << endl;
    int val = c == c2;
    int val2 = c2 > c;
    cout << val << endl;
    cout << val2;
    return 0;
}