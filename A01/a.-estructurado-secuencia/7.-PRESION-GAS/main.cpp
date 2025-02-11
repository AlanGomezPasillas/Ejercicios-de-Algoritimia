#include <iostream>
#define R 0.08
//#define R 1.98
//#define R 8.314
using namespace std;


int main(){
	float P, V, n, T;
	cout<<"PRESION DEL GAS\n\n";
	cout<<"Ingresa el Volumen: ";
	cin>>V;
	cout<<"Ingresa la cantidad de masa: ";
	cin>>n;
	cout<<"Ingresa la Temperatura: ";
	cin>>T;

	P = (n * R * T) / V;

	cout<<"La presion del gas es: "<<P<<endl;

	return 0;
}

// CALCULO MATEMATICO DE LA OPERACION
// P * V = n * R * T
// P = (n * R * T) / V
