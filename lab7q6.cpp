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
	cout<<nat(k);
	cout << endl;

	return 0;
}
