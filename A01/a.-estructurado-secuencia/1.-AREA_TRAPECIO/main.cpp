#include<iostream>
using namespace std;

int main(){
	float A,B,b,h;

	cout<<"AREA DEL TRAPECIO\n\n";
	cout<<"Ingresa la base mayor:";
	cin>>B;
	cout<<"Ingresa la base menor:";
	cin>>b;
	cout<<"Ingresa la altura:";
	cin>>h;

	A=((B+b)*h)/2;

	cout<<"El area es: "<<A<<'\n';

	return 0;
}
