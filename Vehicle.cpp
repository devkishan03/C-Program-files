#include <iostream>
using namespace std;

class Vehicle{
	private:
		int nowheels;
		int speed;
	public:
		Vehicle(int wheels,int speed){
			nowheels=wheels;
			this->speed=speed;
		}
	int getNoofwheels(){
		return nowheels;
	}
	int getspeed(){
		return speed;
	}
	void setWheels(int wheels){
		nowheels=wheels;
	}
	void setSpeed(int speed){
		this->speed=speed;
	}
	
};

class Car:public Vehicle{
private:
	int noofpassengers;
	public:
		Car(int wheels,int speed,int passenger):Vehicle(wheels,speed){
			noofpassengers=passenger;
		}
		
	int getnoofpassenger(){
		return noofpassengers;
	}
	
	void setnoofpassenger(int passenger){
		 noofpassengers=passenger;
	}
	
 // friend ostream& operator<<(ostream &o,Car &c);
};
ostream& operator<<(ostream &o,Car &c){
	o<<"No of wheels:"<<c.getNoofwheels()<<endl;
	o<<"speed:"<<c.getspeed()<<endl;
	o<<"No of passengers:"<<c.getnoofpassenger()<<endl;
	return o;
}

class Truck:public Vehicle{
	private:
		int loadlimit;
	public:
		Truck(int wheels,int speed,int loadlimit):Vehicle(wheels,speed){
			this->loadlimit=loadlimit;
		}	
		int getloadlimit(){
			return loadlimit;
		}
		void setloadlimit(int loadlimit){
			this->loadlimit=loadlimit;
		}
	//	friend ostream & operator<<(ostream &o,Truck &t);
		
};
 ostream & operator<<(ostream &o,Truck &t){
 	o<<"No of wheels:"<<t.getNoofwheels()<<endl;
 	o<<"speed:"<<t.getspeed()<<endl;
 	o<<"Load limit:"<<t.getloadlimit()<<endl;
 	return o;
 }

void checkspeed(Car & c,Truck & t){
	
	if(c.getspeed()<t.getspeed()){
		cout<<"car is slower"<<endl;
	}else
	    cout<<"car is faster"<<endl;
	
}



int main(){
	
	Car c(4,180,4);
	Truck t(10,150,5);
	cout<<c<<endl;
	cout<<t<<endl;
	
	checkspeed(c,t);
	
	return 0;
}
