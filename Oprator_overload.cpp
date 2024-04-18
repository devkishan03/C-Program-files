#include <iostream>
using namespace std;

class Complex
{
public:
    int real;
    int imaginary;

    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }

    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real = real + x.real;
        temp.imaginary = imaginary + x.imaginary;

        return temp;
    }
};

int main()
{
    Complex c1(10, 5), c2(14, 8), c3;
    c3 = c1 + c2;
    cout << c3.real << "+i" << c3.imaginary << endl;

    return 0;
}