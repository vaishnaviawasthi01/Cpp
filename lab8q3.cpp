#include<iostream>

using namespace std;
//---------------------* function to find the largest number *----------------------------------
int klarge(int arrin[],int size,int k)
{	
	int arr[size],j=1;
	arr[0]=arrin[0];
	for(int i=0;i<size-1;i++)
	if(arrin[i]!=arrin[i+1])
	arr[j++]=arrin[i+1];

	return arr[j-k];
}
//--------------------* function to find the smallest number *---------------------------------
int ksmall(int arrin[],int size,int k)
{	
	
	int arr[size],j=1;
	arr[0]=arrin[0];
	for(int i=0;i<size-1;i++)
	if(arrin[i]!=arrin[i+1])
	arr[j++]=arrin[i+1];

	return arr[k-1];
}
//---------------------* function to short it in assanding order *----------------------------
void AS(int arr[],int size)
{	int temp;
	for(int i=1;i<size;i++)
	for(int j=0;j<(size-i);j++)
	if(arr[j]>arr[j+1])
	{
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
	}
}
//----------------------* function to input the elements in the array *---------------------

void input(int arr[],int n)
{	if(n)
	{
		cout << n <<":";
		cin>>arr[n-1];
		input(arr,n-1);
	}
}
		
	
//------------------* our main function *------------------------------------------------
int main( )
{
	int s;
	cout<< "Enter the size of input:";
	cin >>s;
	int a[s],k;

	input(a,s);
	AS(a,s);

	cout<<"To get the 'k'th smolast enter the value of k :";
	cin>>k;
	cout<<endl<<ksmall(a,s,k)<<endl;
	cout<<"To get the 'k'th largest element Enter the value of k:";
	cin>>k;
	cout<<endl<<klarge(a,s,k)<<endl;	
}
