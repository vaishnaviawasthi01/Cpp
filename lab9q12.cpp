#include<iostream>

using namespace std;

int main()

{
	int a,b,*p;
	p=&a;
	b=*p;
	cout<<a<<endl<<b<<endl<<*p<<endl;
	a=2;
	b=3;
	
	cout<<a<<endl<<b<<endl<<*p<<endl;
	p=&b;
	
	cout<<a<<endl<<b<<endl<<p<<endl;
	
}
