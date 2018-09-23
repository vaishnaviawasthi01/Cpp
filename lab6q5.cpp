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

int max(int a,int b)
{
	return (a>b)?a:b;
}

int max(int &a,int &b,int &sum)
{
	sum=(a>b)?a:b;
}


int min(int a,int b)
{
	return (a<b)?a:b;
}

int min(int &a,int &b,int &sum)
{
	sum=(a<b)?a:b;
}

int main()
{
	int x,y,s;
	
	cout<<endl<<"Enter two numbers to find minimum:";
	cin>>x>>y;
	
	int choise=0;
	cout<<"\n\n\n\n\n\n----------* chose one of them *--------------------\n";
	cout<<" 1. sum\n";
	cout<<" 2. maximum\n";
	cout<<"	3. minumun\n";
	cout<<endl;
	cin>>choise;

	switch(choise)
	{
	
	case 1:{
			cout<<"\n\n\n---------------*  Output of function call by value *-------------\n\n";
		cout<<sum(x,y);

		cout<<"\n\n\n-------------------* Output of function call by Reference *--------------------\n\n";
		sun(x,y,s);

		cout<<s;

		cout<<endl;
		break;
		}
	case 2:{
		cout<<"\n\n\n---------------*  Output of function call by value *-------------\n\n";
		cout<<max(x,y);

		cout<<"\n\n\n-------------------* Output of function call by Reference *--------------------\n\n";
		max(x,y,s);

		cout<<s;

		cout<<endl;
		break;
		}
	case 3:{
		
		cout<<"\n\n\n---------------*  Output of function call by value *-------------\n\n";
		cout<<min(x,y);
	
		cout<<"\n\n\n-------------------* Output of function call by Reference *--------------------\n\n";
		min(x,y,s);

		cout<<s;

		cout<<endl;
		break;

		}
	default:{
			cout << " please chouse currect opttion !!!\n\n\n";
			break;

		}
	}
		
}
	
