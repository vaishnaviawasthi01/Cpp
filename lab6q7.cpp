#include<iostream>

using namespace std;

char toUpper(char ch)
{
	return ch-32;
}
	
char toLower(char ch)
{
	return ch+32;
}


int main()
{
	
	char cha;

	cout<< "Enter a character  to change case :";
	cin>>cha;
	

	cout<<"\n-------\n";

	if(cha>='A' &&  cha<='Z' )
		cout<<toLower(cha);
	else 
	if(cha >='a' && cha <='z')
		cout<<toUpper(cha);
	else 
		cout<<"\n please enter some alphabet\n\n";


	cout<<endl;

		

	
}
