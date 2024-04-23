#include <iostream>
#include <cstring>
using namespace std;

class Student
{
private:
    char name[50];
    int roll_no;
    int marks[6];

public:
    Student(char *sname, int roll, int marks[])
    {
        strcpy(name, sname);
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
    int n = 0;
    char name[20];
    int roll;
    int submarks[6];
    cout << "enter the number of student:";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of a student [" << i + 1<<"] :";
        cin >> name;
        cout << "Enter roll no:";
        cin >> roll;

        for (int j = 0; j < 6; j++)
        {
            cout << "enter the marks of sub " << j + 1 << " :";
            cin >> submarks[j];
        }
        Student *s1 = new Student(name, roll, submarks);
        cout << "Avg of student[" << i + 1 << "] will be:" << s1->getAvg() << endl;
    }
    return 0;
}
