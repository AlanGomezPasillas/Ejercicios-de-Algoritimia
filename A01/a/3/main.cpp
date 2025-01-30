#include<iostream>
using namespace std;

int main(){
	float C,F;
	cout<<"CELSIUS A FAHRENHEIT\n\n";
	//cout<<"Ingresa la temperatura en "<<(char)167<<": ";
	cout<<"Ingresa la temperatura en grados Celsius: ";
	cin>>C;

	F=(C*(9.0/5.0))+32;

	//cout<<C<<(char)167<<"C son "<<F<<(char)167<<"F.\n";
	cout<<"El resultado en grados Fahrenheit es: "<<F<<endl;

	return 0;
}

