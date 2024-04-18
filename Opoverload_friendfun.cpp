#include <iostream>
using namespace std;
class Complex2
{
private:
    int real;
    int imaginary;

public:
    Complex2(int real = 0, int img = 0)
    {
        this->real = real;
        imaginary = img;
    }

    void display()
    {
        cout << real << "+i" << imaginary << endl;
    }
    friend Complex2 operator+(Complex2 c1, Complex2 c2);
};

Complex2 operator+(Complex2 c1, Complex2 c2)
{
    Complex2 temp;
    temp.real = c1.real + c2.real;
    temp.imaginary = c1.imaginary + c2.imaginary;
    return temp;
}

int main()
{
    Complex2 c1(10, 5), c2(12, 6), c3;

    c3 = c1 + c2;
    c3.display();

    return 0;
}