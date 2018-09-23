#include<iostream>

using namespace std;

int max(int a,int b)
{
	return (a>b)?a:b;
}

int max(int &a,int &b,int &sum)
{
	sum=(a>b)?a:b;
}

int main()
{
	int x,y,s;
	
	cout<<endl<<"Enter two numbers to find maximum:";
	cin>>x>>y;

	cout<<"\n\n\n---------------*  Output of function call by value *-------------\n\n";
	cout<<max(x,y);

	cout<<"\n\n\n-------------------* Output of function call by Reference *--------------------\n\n";
	max(x,y,s);

	cout<<s;

	cout<<endl;

		
}

	
