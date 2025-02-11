#include <iostream>
using namespace std;

int main(){
	float vf, vi, a, t;

	cout<<"VELOCIDAD FINAL\n\n";
	cout<<"Ingresa la velocidad inicial: ";
	cin>>vi;
	cout<<"Ingresa la aceleracion: ";
	cin>>a;
	cout<<"Ingresa el tiempo: ";
	cin>>t;

	vf=vi+(a*t);

	cout<<"La velocidad final es: "<<vf<<endl;

	return 0;
}
