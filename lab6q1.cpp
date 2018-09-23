#include<iostream>

using namespace std;


void datain(float &unitCst,float &units,float &taxRt)
{
	cout<<"Enter the unit cost of item: ";
	cin>> unitCst;
	cout<<"Enter the unit of Item: ";
	cin>> units;
	cout<< "Enter the Tex Rate of Item: ";
	cin >> taxRt;
}

void dataCl(float unitCst,float units,float taxRt,float &salesTx,float &totDue)
{
	salesTx = unitCst*taxRt/100;
	totDue=salesTx*units;
}

void dataPrfloat(float unitCst,float units,float taxRt,float salesTx,float totDue)
{
	cout<<"you each item has cost "<< unitCst <<" rupees. you have this "<<units<<" numbers and each has tax of "<<taxRt<<" percent, it means"<< salesTx<< " rupees on each item.your total due is "<<totDue<<'.'<<endl;
}

int main()
{

float unitCost,unitsPurch,taxRate,salesTax,totalDue;


datain(unitCost,unitsPurch,taxRate);

dataCl(unitCost,unitsPurch,taxRate,salesTax,totalDue);

dataPrfloat(unitCost,unitsPurch,taxRate,salesTax,totalDue);

		

	
}
