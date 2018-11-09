#include<iostream>

using namespace std;

int main()

{
	char ch='C';
	int n=3;
	float flo=45.2;
	double dou=54.3;
	bool boo=1;
	char *p1=&ch;
	int *p2=&n;
	float *p3=&flo;
	double *p4=&dou;
	bool *p5=&boo;
	cout<<sizeof(ch)<<endl;
	cout<<sizeof(n)<<endl;
	cout<<sizeof(flo)<<endl;
	cout<<sizeof(boo)<<endl;
	cout<<sizeof(p1)<<endl;
	cout<<sizeof(p2)<<endl;
	cout<<sizeof(p3)<<endl;
	cout<<sizeof(p4)<<endl;
	cout<<sizeof(p5)<<endl;
	cout<<sizeof(dou)<<endl;

}


