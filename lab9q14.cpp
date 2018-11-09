#include<iostream>

using namespace std;

int main()

{

	char arr[10]="Shriman";
	
	for(char i=0;i<7;i++)
	cout<<arr[i]<<endl;

	char *p=arr;
	

	for(int i=0;i<7;i++)
	cout<<*p++<<endl;


}


