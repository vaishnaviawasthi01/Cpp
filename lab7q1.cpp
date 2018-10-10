#include <iostream>

using namespace std;

int power(int n,int p)
{
	if(p)
	return n*power(n,p-1);
	else
	return 1;
}

int main()
{
	int k,s;
	cout << "Enter a number to power it :";
	cin >> k;
	cout << "Enter a number to power of :";
	cin >> s;
	cout << " The power of the Number is : " << power(k,s);
	cout << endl;

	return 0;
}
