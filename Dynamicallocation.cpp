# include <iostream>
using namespace std;
int main(){

int size;
cout<<"enter the size of array:";
cin>>size;

//int n=new int[size];

int n[size];


cout<<sizeof(n)<<endl;

int *p=new int[10];
cout<<sizeof(p)<<endl;
delete []p;
p=new int[20];
cout<<sizeof(p)<<endl;	
	
	return 0;
}
