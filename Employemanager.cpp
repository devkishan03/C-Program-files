#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Manager;
class Employee
{
private:
	string name;
	int age;
	Manager *mang;

public:
	Employee(string name, int age)
	{
		this->name = name;
		this->age = age;
		mang = nullptr;
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		return age;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	void setManager(Manager *mng)
	{
		mang = mng;
	}
	Manager *getManager()
	{
		return mang;
	}
	friend ostream &operator<<(ostream &o, Employee e);
};
ostream &operator<<(ostream &o, Employee e)
{
	o << "Name:" << e.getName() << endl;
	o << "Age:" << e.getAge() << endl;
	return o;
}

class Manager : public Employee
{
private:
	vector<Employee *> supervise;

public:
	Manager(string name, int age) : Employee(name, age)
	{
	}
	void addEmployee(Employee *emp)
	{
		supervise.push_back(emp);
		emp->setManager(this);
	}
	Employee *getEmployees()
	{
		for (auto x : supervise)
		{
			return x;
		}
	}
	friend ostream &operator<<(ostream &o, Manager m);
};

ostream &operator<<(ostream &o, Manager m)
{
	o << "Name:" << m.getName() << endl;
	o << "Age:" << m.getAge() << endl;
	o << "Employee list:\n"
	  << m.getEmployees()->getName() << "\n"
	  << m.getEmployees()->getAge() << endl;
	return o;
}

int main()
{

	Employee e("kishan singh", 27);
	Employee e2("sourav", 21);

	Manager m("patil", 40);

	// m.addEmployee(&e);
	// m.addEmployee(&e2);
	e.setManager(&m);
	cout << e;
	cout << m;

	return 0;
}
