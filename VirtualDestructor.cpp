# include<iostream>
using namespace std;
class Test{
public:
int *p;
 
 Test(){
 	p=new int();
 	cout<<"test object Constructed"<<endl;
 }
virtual ~Test(){
 	delete p;
 	cout<<"test object destructed"<<endl;
 }



};
class Test2:public Test{
	public:
	Test2(){
		cout<<"test2 object created"<<endl;
	}
	~Test2(){
		cout<<"test2 object distructed"<<endl;
	}
};



int main(){
	
//	Test t;
//	Test *t2=new Test(); //without delete t2 obj will not delete it stays in heap;
//	Test2 t3;
//	Test2 *t4=new Test2();
	Test *t5=new Test2();
//	delete t2;
delete t5;
	return 0;
}
