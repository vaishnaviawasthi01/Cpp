#include<iostream>

using namespace std;
//---------------------* function to find the largest number *----------------------------------
int larger(int arr[],int size)
{	int large=0;
	for(int i=0;i<size;i++)
		large=(large>arr[i])?large:arr[i];
	return large;
}
//--------------------* function to find the smallest number *---------------------------------
int small(int arr[],int size)
{	int small=arr[0];
	for(int i=1;i<size;i++)
		small=(small<arr[i])?small:arr[i];
	return small;
}
//---------------------* function to sum all the elements of a array *------------------------
int sum(int arr[],int size)
{
	return (size)?arr[size-1]+sum(arr,size-1):0;
}
//---------------------* function to find out the mean of a array *---------------------------
int mean(int arr[],int size)
{
	return sum(arr,size)/size;
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
//-----------------------* function to find the median of the array *------------------------
float median(int arr[],int size)
{
	return (size%2)?arr[(size-1)/2]:(arr[size/2]+arr[((size/2)-1)/2]);
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
//-----------------------* function to find the mode of a array *-----------------------
int mode(int arr[],int size)
{	


	int maxfre=0,maxvalue=0,fre=1;
	for(int i=0;i<size-1;i++)
	{
		if(arr[i]==arr[i+1])
		fre++;
		else
		fre=1;
		if(maxfre<fre)
		{
			maxfre=fre;
			maxvalue=arr[i];
		}
	}
	cout<<"mode of arrayis :"<<maxvalue<<endl;
	cout<<"having frequency :"<<maxfre<<endl;
	return maxvalue;
}	
		
		
	
//------------------* our main function *------------------------------------------------
int main( )
{
	int s;
	cout<< "Enter the size of input:";
	cin >>s;
	int a[s];

	input(a,s);
	AS(a,s);

	cout <<"mean of the array is :"<< mean(a,s)<<endl;
	cout <<"largest number of the array is :"<<larger(a,s)<<endl;
	cout <<"smolest number of given array is :"<<small(a,s)<<endl;
	cout <<"median of given data is :"<<median(a,s)<<endl;
	cout <<"mode of given data is :"<<mode(a,s)<<endl;
	
}
