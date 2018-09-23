#include<iostream>

using namespace std;

int sumEvenNumbers(int a,int b)
{
	int sum=0;
	for(int i=a+1;i<b;i++)
	{sum=sum+((i%2)?0:i);
	cout<<sum;}
	return sum;
}

int sumOddNumbers(int a,int b)
{
	int sum=0;
	for(int i=a+1;i<b;i++)
	sum=sum+((i%2)?i:0);

	return sum;
}

int sumSqureOddNumbers(int a,int b)
{
	int sum=0;
	for(int i=a+1;i<b;i++)
	{sum=sum+((i%2)?i*i:0);
	
	}
	return sum;
}

int sumSqureEvenNumbers(int a,int b)
{
	int sum=0;
	for(int i=a+1;i<b;i++)
	sum=sum+((i%2)?0:i*i);

	return sum;
}


int main()
{
	int x,y;
	
	cout<<endl<<"Enter two numbers to sum even number between :";
	cin>>x>>y;
	
	
	int sumEven = sumEvenNumbers(x,y);
	int sumOdd = sumOddNumbers(x,y);
	int sumSquareEven = sumSqureEvenNumbers(x,y);
	int sumSquareOdd = sumSqureOddNumbers(x,y);
	

	
	cout<<"\nvalue of sumEven is : "<<sumEven;
	cout<<"\nvalue of sumOdd is : "<<sumOdd;
	cout<<"\nvalue of sumSquareEven is : "<<sumSquareEven;
	cout<<"\nvalue of sumSquareOdd is : "<<sumSquareOdd;
	




	cout<<endl;

		
}

	
