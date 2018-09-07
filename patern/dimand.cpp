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


int main() {
	int n;
	
	cout<<"Enter a number : ";
	cin >> n;

	mhdsp(n);



  return 0;
}
