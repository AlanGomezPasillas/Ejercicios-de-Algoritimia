#include <iostream>
using namespace std;

bool esPrimoCiclo(int num, int it){
	if(it>1){
		if(num%it==0)return false;
		return esPrimoCiclo(num, it-1);
	}else return true;
}

bool esPrimo(int num){
	int it = num-1;
	
	return esPrimoCiclo(num, it);
}

int main(){
	int num;

	cout<<"DETERMINAR SI ES PRIMO\n\n";
	cout<<"Ingresa un numero: ";
	cin>>num;
	
	cout<<"El numero ingresado ";
	esPrimo(num)?cout<<"es":cout<<"no es";
	cout<<" primo\n"; 

	return 0;
}
