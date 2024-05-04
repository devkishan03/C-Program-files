# include<iostream>
using namespace std;
class Test{
public:
int *p;
 
 Test(){
 	p=new int();
 	cout<<"Constructed"<<endl;
 }
 ~Test(){
 	delete p;
 	cout<<"destructed"<<endl;
 }



};




int main(){
	
	Test *t=new Test();
	delete t;
	
	
	return 0;
}
