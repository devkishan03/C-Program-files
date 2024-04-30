#include <iostream>
#include <iomanip>
using namespace std;
class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }
    Time(int ss)
    {
        hour = 0;
        minute = 0;
        setSecond(ss);
    }
    Time(int mm, int ss)
    {
        hour = 0;
        setMinute(mm);
        setSecond(ss);
    }
    Time(int hh, int mm, int ss)
    {
        setHour(hh);
        setMinute(mm);
        setSecond(ss);
    }

    void setHour(int hh)
    {
        if (hh >= 0 && hh <= 23)
            hour = hh;
        else
            cerr << "hour should be b/w 0-23" << endl;
    }
    void setMinute(int mm)
    {
        if (mm >= 0 && mm <= 59)
            minute = mm;
        else
            cerr << "Minute should be b/w 0-59" << endl;
    }
    void setSecond(int ss)
    {
        if (ss >= 0 && ss <= 50)
            second = ss;
        else
            cerr << "Second should be b/w 0-59" << endl;
    }
    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    int getSecond()
    {
        return second;
    }

    void display()
    {
        // printf("%02d:%02d:%02d\n", getHour(), getMinute(), getSecond());
        cout.width(2);
        cout.fill('0');
        cout << getHour() << ":";
        cout.width(2);
        cout << getMinute() << ":";
        cout.width(2);
        cout << getSecond() << endl;
    }
};
int main()
{
    Time t1(9);
    t1.display();

    Time t2(9, 5);
    // t2.display();

    Time t3(9, 5, 4);
    // t3.display();

    // Time t4(26, 75, 78);
    // t4.display();

    return 0;
}