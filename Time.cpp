#include <iostream>
using namespace std;
class Time
{
private:
    int hour = 0;
    int minute = 0;
    int second = 0;

public:
    Time()
    {
    }
    Time(int ss)
    {
        setSecond(ss);
    }
    Time(int mm, int ss)
    {
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
        printf("%02d:%02d:%02d\n", getHour(), getMinute(), getSecond());
    }
};
int main()
{
    Time t1(9);
    t1.display();

    Time t2(9, 5);
    t2.display();

    Time t3(9, 5, 4);
    t3.display();

    // Time t4(26, 75, 78);
    // t4.display();

    return 0;
}