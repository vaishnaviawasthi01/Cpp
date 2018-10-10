#include <iostream>

using namespace std;

int nat(int n,int p=0,int q=1)
{
	if(n)
	nat(n-1,q,p+q);
	else
	return q;
}

int main()
{
	int k,s;
	cout << "Enter a number which placed fibonoacci term you want:";
	cin >> k;
	cout << " the term is : \n\n" ;
	cout << nat(k-1);
	cout << endl;

	return 0;
}
