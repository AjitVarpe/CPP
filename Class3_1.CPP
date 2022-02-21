#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
void swap(int a,int b){
	int temp=a;
	a=b;
	b=temp;
	cout<<"After Swap Values are "<<endl<<"a="<<a<<endl<<"b="<<b;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"Before Swap Values are"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
	swap(a,b);
	
  return 0;
}
