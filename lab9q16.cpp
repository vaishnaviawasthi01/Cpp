
#include <iostream>

using namespace std;





int main(void)
{
char str[20], *p;

cout << "Input about 10 characters of string\n";
cin >> str;

// Pointer variable refers to address of string 
p=str;
int count=0;
// Show string by shifting top character of string to right
while(*p!='\0')
{
	count++;
	p++;
}
for(int i=count-1;i>=0;i--)
cout<<str+i<<endl;

return (0);
}
