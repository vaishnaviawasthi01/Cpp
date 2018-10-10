#include <iostream>

using namespace std;

void nat(int n,int p=1)
{
	if(p<=n)
	{
		cout << p << endl;
		nat(n,p+1);
	}
}

int main()
{
	int k,s;
	cout << "Enter a number till you want to print number :";
	cin >> k;
	cout << " the Numbers are : \n\n" ;
	nat(k);
	cout << endl;

	return 0;
}
