#include <iostream>

using namespace std;

int nat(int n)
{
	if(n)
	return n%10+nat(n/10);
	else
	return 1;
}

int main()
{
	int k,s;
	cout << "Enter a number to sum its digit:";
	cin >> k;
	cout << " the sum is : \n\n" ;
	cout << nat(k);
	cout << endl;

	return 0;
}
