#include <iostream>

using namespace std;

int nat(int n)
{
	if(n)
	return n*nat(n-1);
	else
	return 1;
}

int main()
{
	int k,s;
	cout << "Enter a number to its factorial :";
	cin >> k;
	cout << " the factorial is : \n\n" ;
	cout << nat(k);
	cout << endl;

	return 0;
}
