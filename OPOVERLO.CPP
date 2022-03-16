#include <conio.h>
#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>

class A
{
private:
int a,b,c;
public:
void operator -();
A()
{
a=5;
b=6;
c=7;
}
void display()
{
cout<<endl<<"a="<<a<<endl<<"b="<<b<<endl <<"c="<<c<<endl;
}
};

void A::operator -()
{
a=-a;
b=-b;
c=-c;
}

void main()
{
clrscr();
A obj; // default constructor
cout<<"The Values before using Operator Function"<<endl;
obj.display();
-obj;  // this is calling to the opertor function
cout<<"The values after using Operator Function"<<endl;
obj.display();
getch();
}



