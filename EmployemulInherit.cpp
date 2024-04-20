#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    int eid;

public:
    Employee(string name, int id)
    {
        this->name = name;
        eid = id;
    }
    string getName()
    {
        return name;
    }
    int getId()
    {
        return eid;
    }
};
class FulltimeEmployee : public Employee
{

private:
    int salary;

public:
    FulltimeEmployee(string name, int id, int salary) : Employee(name, id)
    {
        this->salary = salary;
    }

    int getSalary()
    {
        return salary;
    }
};

class ParttimeEmployee : public Employee
{

private:
    int wages;

public:
    ParttimeEmployee(string name, int id, int wage) : Employee(name, id)
    {
        wages = wage;
    }

    int getWages()
    {
        return wages;
    }
};

int main()
{
    Employee e("emp1", 123);
    FulltimeEmployee f("femp1", 111, 10000);
    ParttimeEmployee p("pemp1", 222, 300);

    cout << e.getName() << " " << e.getId() << endl;
    cout << f.getName() << " " << f.getId() << " " << f.getSalary() << endl;
    cout << p.getName() << " " << p.getId() << " " << p.getWages() << endl;

    return 0;
}