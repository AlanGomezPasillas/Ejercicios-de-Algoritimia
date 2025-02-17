#include <iostream>
using namespace std;

int main(){
	int x, tipo;
	
	cout<<"NEGATIVO, POSITIVO O NEUTRO\n\n";
	cout<<"Ingresa un numero: ";
	cin>>x;
	
	switch((x>0) - (x<0)){
		case -1: cout<<"El numero es negativo";
			break;
		case 1: cout<<"El numero es positivo";
			break;
		case 0: cout<<"El numero es neutro";
	}
	cout<<endl;

	return 0;
}