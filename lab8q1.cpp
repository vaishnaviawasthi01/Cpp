#include<iostream>

using namespace std;

int sum(int arr[],int size)
{
	return (size)?arr[size-1]+sum(arr,size-1):0;
}

void input(int arr[],int n)
{	if(n)
	{
		cout << n <<":";
		cin>>arr[n-1];
		input(arr,n-1);
	}
}
	

int main()
{
	int s;
	cout<< "Enter the size of input:";
	cin >>s;
	int a[s];

	input(a,s);

	cout << sum(a,s)<<endl;
	
}
