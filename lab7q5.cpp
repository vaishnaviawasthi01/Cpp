#include <iostream>

using namespace std;

int odd(int n,int p=1)
{
	if(p<=n)
	return p+odd(n,p+2);
	else
	return 0;
}

int even(int n,int p=2)
{
	if(p<=n)
	return p+even(n,p+2);
	else
	return 0;
}


int main()
{
	int k,s;
	cout << "Enter a number till you want sum of the number:";
	cin >> k;
	cout<<" Do you want to print enen or odd:\n  (enter '0' to even and '1' to odd):";
	cin >> s;
	
	cout << " the Numbers are : \n\n" ;
	if(s)
	cout<<odd(k);
	else
	cout<<even(k);
	
	cout << endl;

	return 0;
}
