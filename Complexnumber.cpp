#include<iostream>
using namespace std;
class ComplexNumber{
private:
	int real;
	int imaginary;
public:
	ComplexNumber(int real,int imaginary){
		this->real=real;
		this->imaginary=imaginary;
	}
	int getReal(){
		return real;
	}
	int getImaginary(){
		return imaginary;
	}
	void setReal(int r){
		real=r;
	}
	void setImaginary(int i){
		imaginary=i;
	}
    void displayComplex(){
    	cout<<"Complex number will be:"<<real<<"+i"<<imaginary<<endl;
	}
};

int main(){
	cout<<"enter the real part"<<endl;
	int r;
	cin>>r;
	cout<<"enter the imaginary part"<<endl;
	int i;
	cin>>i;
	
	ComplexNumber c(r,i);
	c.displayComplex();
	
	return 0;
}
