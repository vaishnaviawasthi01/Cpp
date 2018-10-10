#include <iostream>

using namespace std;

void odd(int n,int p=1)
{
	if(p<=n)
	{
		cout << p << endl;
		odd(n,p+2);
	}
}

void even(int n,int p=2)
{
	if(p<=n)
	{
		cout << p << endl;
		even(n,p+2);
	}
}

int main()
{
	int k,s;
	cout << "Enter a number till you want to print number :";
	cin >> k;
	cout<<" Do you want to print enen or odd:\n  (enter '0' to even and '1' to odd):";
	cin >> s;
	
	cout << " the Numbers are : \n\n" ;
	if(s)
	odd(k);
	else
	even(k);
	
	cout << endl;

	return 0;
}
