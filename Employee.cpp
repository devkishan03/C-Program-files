#include<iostream>
#include<cstring>
using namespace std;

class Employee{
private:
	char name[50];
	int age;
public:	
	Employee(char *ename,int age){
		strcpy(name,ename);
		this->age=age;
	}
	char* getName(){
		return name;
	}
	int getAge(){
		return age;
	}
	void setName(char *ename){
		strcpy(name,ename);
	}
	void setAge(int age){
		this->age=age;
	}
	
	void display(){
		cout<<"Name of the employee:"<<name<<endl;
		cout<<"Age of the employee:"<<age<<endl;
	}
	
	
	
};

int main(){
	char name[50];
	int age;
	cout<<"enter name of a employee:";
	cin.getline(name,50);
	cout<<"enter age:";
	cin>>age;
	Employee a(name,age);
	a.display();
	return 0;
}
