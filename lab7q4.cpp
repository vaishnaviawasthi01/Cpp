#include <iostream>

using namespace std;

int nat(int n)
{
	if(n)
		return n+nat(n-1);
	else
		return 0;
	
}

int main()
{
	int k,s;
	cout << "Enter a number till you want sum of the natural number:";
	cin >> k;
	cout << " the Numbers are : \n\n" ;
	cout<<nat(k);
	cout << endl;

	return 0;
}
