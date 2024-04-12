# include <iostream>
using namespace std;

int add(int a,int b){
	return a+b;
}
int add(int a,int b,int c){
	return a+b+c;
}
float add(float a,float b){
	return a+b;
}
float add(float a,float b,float c){
	return a+b+c;
}



int main(){

	int x=10,y=15,z=23;
	float u=12.4,v=23.5,w=42.3;
	int t=add(x,y);
	float o=add(u,v,w);
	cout<<t<<" "<<o<<endl;
	
	return 0;	
}
