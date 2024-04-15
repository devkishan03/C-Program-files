#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll_no;
    int marks[6];

public:
    Student(string name, int roll, int marks[])
    {
        this->name = name;
        roll_no = roll;
        for (int i = 0; i < 6; i++)
        {
            this->marks[i] = marks[i];
        }
    }

    string getName()
    {
        return name;
    }
    int getRoll()
    {
        return roll_no;
    }
    void getMarks()
    {
        for (int i = 0; i < 6; i++)
        {
            cout << "mark " << i << ":" << marks[i] << endl;
        }
    }
    double getAvg()
    {
        int avg = 0;
        for (int i = 0; i < 6; i++)
        {
            avg += marks[i];
        }

        return (double)avg / 6;
    }
};

int main()
{
    int marks1[] = {79, 76, 78, 87, 89, 98};

    Student *s1 = new Student("student1", 01, marks1);
    s1->getMarks();
    cout << s1->getAvg() << endl;
    return 0;
}