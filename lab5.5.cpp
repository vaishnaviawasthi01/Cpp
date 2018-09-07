/* This program is to printing paterns of different types. */



#include<iostream>

using namespace std;

//--------------*** hollow square star pattern ***----------------
void pro_1(int n){
	for( int i=0;i<n*n;i++){
		cout<<((i/n>n/2?n-i/n-1:i/n)*(i%n>n/2?n-i%n-1:i%n)?' ':'*');
		if(i%n==(n-1))
		cout<<endl;
	}


}
//-------------*** hollow square star pattern with diagonal ***-------
void pro_2(int n){
	for( int i=0;i<n*n;i++){
		cout<<(((i/n>n/2?n-i/n-1:i/n)*(i%n>n/2?n-i%n-1:i%n))&&((i/n>n/2?n-i/n-1:i/n)!=(i%n>n/2?n-i%n-1:i%n))?' ':'*');
		if(i%n==(n-1))
		cout<<endl;
	}

}

//---------*** Hollow Right Triangle Star Pattern ***-------------
void pro_3(int n){

	for( int i=0;i<n*n;i++){
		cout<<(((i/n)!=(n-1))*(i%n)&&((i/n)!=(i%n))?' ':'*');
		if(i%n==(n-1))
		cout<<endl;
	}
}
//--------*** Mirrored Right Triangle Star Pattern ***-------------
void pro_4(int n){

	for( int i=0;i<n*n;i++){
		cout<<((i/n+i%n)<(n-1)?' ':'*');
		if(i%n==(n-1))
		cout<<endl;
	}
}
//-------*** 11.Hollow Mirrored Right Triangle Star Pattern ***-------
void pro_5(int n){

	for( int i=0;i<n*n;i++){
		cout<<((i/n+i%n-n+1)*((i/n)-n+1)*((i%n)-n+1)?' ':'*');
		if(i%n==(n-1))
		cout<<endl;
	}
}
//-----*** 15.Hollow Inverted Mirrored Right Triangle Star Pattern ***-----
void pro_6(int n){
	for( int i=0;i<n*n;i++){
		cout<<((i/n-i%n)*(i/n)*((i%n)-n+1)?' ':'*');
		if(i%n==(n-1))
		cout<<endl;
	}
}
//-----*** 16.Pyramid Star Pattern ***---------
void pro_7(int i){
	int n=i*2+1;
	for( int i=0;i<n*(n/2);i++){
		cout<<((i%n>n/2?n-i%n-1:i%n)+(i/n)<n/2?' ':'*');
		if(i%n==(n-1))
		cout<<endl;
	}
}
//----***  21.Mirrored Half Diamond Star Pattern ***-------
void pro_8(int i){
	int n=i*2+1;
	for( int i=0;i<n*n;i++){
		cout<<((i/n>n/2?n-i/n-1:i/n)+(i%n>n/2?-1:i%n)<n/2?' ':'*');
		if(i%n==(n-1))
		cout<<endl;
	}

}

//----*** 23.Hollow Diamond Star Pattern ***---------

void pro_9(int i){
	int n=i*2+1;
	for( int i=0;i<n*n;i++){
		cout<<((i/n>n/2?n-i/n-1:i/n)+(i%n>n/2?n-i%n-1:i%n)>n/2?' ':'*');
		if(i%n==(n-1))
		cout<<endl;
	}

}
//-----*** 21.Diamond Star Pattern ***------
void pro_10(int i){
	int n=i*2+1;
	for( int i=0;i<n*n;i++){
		cout<<((i/n>n/2?n-i/n-1:i/n)+(i%n>n/2?n-i%n-1:i%n)<n/2?' ':'*');
		if(i%n==(n-1))
		cout<<endl;
	}

}


void clear()
{
	for(int i=0;i<100;i++)
		cout<<endl;
}

int main() {
	int n;
	clear();
	cout << "\n-----------*** Slect one of theme ***--------------"<< endl;
	cout << "1. hollow square star pattern\n";
	cout << "2. hollow square star pattern with diagonal\n";
	cout << "3. Hollow Right Triangle Star Pattern\n";
	cout << "4. Mirrored Right Triangle Star Pattern\n";
	cout << "5. Hollow Mirrored Right Triangle Star Pattern\n";
	cout << "6. Hollow Inverted Mirrored Right Triangle Star Pattern\n";
	cout << "7. Pyramid Star Pattern\n";
	cout << "8. Mirrored Half Diamond Star Pattern\n";
	cout << "9. Hollow Diamond Star Pattern\n";
	cout << "10.Diamond Star Pattern.\n";
	cout << "Chose from 1 to 10 :";

	int choise=0;
	cin >> choise;
	clear();
	cout<<"Enter a number : ";
	cin >> n;
	clear();
	switch(choise)
	{
		case 1: pro_1(n); break;
		case 2: pro_2(n);break;
		case 3: pro_3(n);break;
		case 4: pro_4(n);break;
		case 5: pro_5(n);break;
		case 6: pro_6(n);break;
		case 7: pro_7(n);break;
		case 8: pro_8(n);break;
		case 9: pro_9(n);break;
		case 10:pro_10(n);break;
		default :cout <<" --------------*** please enter courrect option ***------------------------";
	} 
	return 0;

}
