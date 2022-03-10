#include <bits/stdc++.h>
#include <stdio.h>
#include <conio.h>
using namespace std;
class person{
private:
	int age;
	char name[20];
	int id;
 public:
 	void getvalues1(){
 		cout<<"Enter Name of person"<<endl;
 		cin>>name;
 		cout<<"Enter Age of person"<<endl;
 		cin>>age;
 		cout<<"Enter id of person"<<endl;
 		cin>>id;
 	}
 	void setvalues1(){
 		cout<<"-----------------------------"<<endl;
 		cout<<"Name of person :- "<<name<<endl;
 		cout<<"Age of  person :- "<<age<<endl; 
 		cout<<" ID  of person :- "<<id<<endl;
 	}
};
class emp:public person {
private:
	int empid;
	char desig[20];
public:
	public:
 	void getvalues2(){
 		cout<<"Enter empid of Employee"<<endl;
 		cin>>this->empid;
 		cout<<"Enter Designation of Employee"<<endl;
 		cin>>this->desig;
 	}
 	void setvalues2(){
 		cout<<"Name of person :- "<< this->empid<<endl;
 		cout<<"Age of  person :- "<< this->desig<<endl;
 	}
 		
};
int main(){
	
	emp obj;
    emp *objP;
    objP = &obj;

	objP->getvalues1();
	objP->getvalues2();
	objP->setvalues1();
	objP->setvalues2();
return 0;
}
