#include<iostream>

using namespace std;

int sum(int a,int b)
{
	return a+b;
}

int sun(int &a,int &b,int &sum)
{
	sum=a+b;
}

int main()
{
	int x,y,s;
	
	cout<<endl<<"Enter two numbers:";
	cin>>x>>y;

	cout<<"\n\n\n---------------*  Output of function call by value *-------------\n\n";
	cout<<sum(x,y);

	cout<<"\n\n\n-------------------* Output of function call by Reference *--------------------\n\n";
	sun(x,y,s);

	cout<<s;

	cout<<endl;

		
}

	
