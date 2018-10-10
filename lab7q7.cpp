#include <iostream>

using namespace std;

int nat(int n,int p=0)
{
	if(n)
	return nat(n/10,(p*10)+(n%10));
	else
	return p;
}

int main()
{
	int k,s;
	cout << "Enter a number to reverse :";
	cin >> k;
	cout << " the Numbers is : \n\n" ;
	if(nat(k)-k)
	cout << "it is a not a palindrome";
	else
	cout << "it is a palindrome";
	cout << endl;

	return 0;
}
