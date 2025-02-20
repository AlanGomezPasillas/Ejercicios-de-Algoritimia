#include <iostream>
using namespace std;

int main(){
	int tabla, veces;

	cout<<"-- Tabla de multiplicar --\n";
	cout<<"--------------------------\n\n";
	cout<<"Ingresa la tabla a realizar: ";
	cin>>tabla;
	cout<<"Ingresa el numero de iteraciones: ";
	cin>>veces;
    
    int i=1;
	while(veces--){
		cout<<tabla<<" * "<<i<<" = "<<tabla*i<<endl;
		i++;
	}

	return 0;
}
