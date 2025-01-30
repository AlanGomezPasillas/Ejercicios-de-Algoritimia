#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float A,P,l,a;

	cout<<"AREA DEL PENTAGONO\n\n";
	cout<<"Ingresa la medida de un lado: ";
	cin>>l;
	
	a = (0.1*l)*sqrt(25+(10*sqrt(5)));
	P = l*5;
	A = (P*a)/2;

	cout<<"El area es: "<<A<<'\n';

	return 0;
}
