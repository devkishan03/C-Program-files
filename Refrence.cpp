# include <iostream>
using namespace std;
int main(){
	
	int a=10;
	int &y=a;
	
	cout<<a<<endl;
	cout<<y<<endl;
	
	a++;
	cout<<a<<endl;
	cout<<y<<endl;
	
	y++;
	cout<<a<<endl;
	cout<<y<<endl;
	
	cout<<&a<<" "<<&y;

	return 0;
}
