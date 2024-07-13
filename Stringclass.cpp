#include <iostream>
#include <cstring>
using namespace std;

class String
{

private:
    char *ch;
    int size;

public:
    String(char *a, int n)
    {
        size = n;
        ch = new char[n + 1];
        strcpy(ch, a);
    }
    ~String() {}

    String &operator=(String &obj)
    {
        delete ch;
        ch = new char[obj.size + 1];
        strcpy(this->ch, obj.ch);
        return *this;
    }

    int operator==(String &obj)
    {
        return strcmp(ch, obj.ch);
    }

    String &operator+(String &obj)
    {
        char *ch2 = new char[size + 1];
        strcpy(ch2, ch);
        delete ch;
        ch = new char[size + obj.size + 1];
        strcpy(ch, ch2);
        delete ch2;
        strcat(ch, obj.ch);
        return *this;
    }

    friend ostream &operator<<(ostream &o, String &obj);
};

ostream &operator<<(ostream &o, String &obj)
{
    o << obj.ch << endl;
    return o;
}

int main()
{

    String a("hello", 5);
    String b("hello", 5);
    String d("world", 5);
    String c = a + d;
    cout << c;

    int m = a == b;
    int o = a == d;
    cout << m << endl;
    cout << o;

    return 0;
}