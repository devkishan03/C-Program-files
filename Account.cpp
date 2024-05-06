#include<iostream>
#include<cstring>
using namespace std;
class Account{
	private:
		char name[50];
		int accno;
		char acctype[5];
		double accbal;
	public:
	Account(char *cname,int accno,char *type,double bal){
		strcpy(name,cname);
		this->accno=accno;
		strcpy(acctype,type);
		if(bal<5000)
		 cerr<<"minimum account opening balance will be rs.5000/"<<endl;
		else
		accbal=bal; 
	}
	void deposit(double bal){
		accbal+=bal;
	}
	void withdraw(double bal){
		
		if((accbal-bal)<5000)
		cerr<<"Account should be maintain minimum rs.5000/"<<endl;
		else
		accbal-=bal;
	}
	int getaccountno(){
		return accno;
	}
	int getbalance(){
		return balance;
	}
	void getaccdetails(){
		cout<<"name:"<<name<<endl;
		cout<<"Acount no:"<<accno<<endl;
		cout<<"Acount type:"<<acctype<<endl;
		cout<<"Acount Balance:"<<accbal<<endl;
	}
	void findaccount(Account []acc,int accno){
		for(Account a:acc){
			if(a.getaccountno==accno)
			  a.getaccdetails();
			else
			cerr<<"account not find"<<endl;
		}
		
	}
	
};



int main(){
	int n;
	cout<<"enter the no of account want to create"<<endl;
	cin>>n;
	Account acc[n];
	for(int i=0;i<n;i++){
		
	}
	Account a("kishan",1234,"c",6000);
	a.accdetails();
	
	
	return 0;
}
