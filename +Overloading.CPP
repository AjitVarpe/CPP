#include <conio.h>
#include <stdio.h>
// #include <iostream.h>
#include<bits/stdc++.h>
using namespace std;
#include <stdlib.h>

class A
{
private:
char a[30],b[10],c[10];
public:
void operator +();
 void getval()
{
cout<<"enter a ,b, c :"<<endl;
gets(a);
gets(b);
gets(c);
}
void display()
{
cout<<endl<<"a="<<a<<endl<<"b="<<b<<endl <<"c="<<c<<endl;
}
};

void A::operator +()
{
// cout<<a<<b<<c<<endl;
strcat(a,b);
strcat(a,c);

cout<<a<<endl;

}

int main()
{
// clrscr();
A obj; // default constructor
cout<<"The Values before using Operator Function"<<endl;
obj.getval();
obj.display();
+obj;  // this is calling to the opertor function
cout<<"The values after using Operator Function"<<endl;
obj.display();
return 0;
}
