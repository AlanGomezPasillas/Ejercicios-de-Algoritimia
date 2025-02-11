#include<iostream>
using namespace std;

int main(){
	float C,F;
	cout<<"FAHRENHEIT A CELSISUS\n\n";
	//cout<<"Ingresa la temperatura en "<<(char)167<<": ";
	cout<<"Ingresa la temperatura en grados Fahrenheit: ";
	cin>>F;

	C = (F-32)/(9.0/5.0);

	//cout<<C<<(char)167<<"C son "<<F<<(char)167<<"F.\n";
	cout<<"El resultado en grados Celcius es: "<<C<<endl;

	return 0;
}

