#include<iostream>
using namespace std;

int main(){
	
try{
	throw 99;
}
catch(int i){
	cout<<"exception catch:"<<i<<endl;
	try{
		throw 12.5;
	}
	catch(double d){
	cout<<"catch:"<<d;
}
}

	return 0;
}
