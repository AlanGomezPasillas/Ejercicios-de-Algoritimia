#include <iostream>
using namespace std;

enum signs {NEGATIVO = -1, NEUTRO, POSITIVO};

int getSign(int num){
	int res;
	
	if(num < 0){
		res = NEGATIVO;
	}else if(num > 0){
		res = POSITIVO;
	}else{
		res = NEUTRO;
	}
	
	return res;
}

int main(){
	int num;
	
	cout<<"POSITIVO, NEGATIVO O NEUTRO\n\n";
	cout<<"Ingresa un numero: ";
	cin>>num;
	
	cout<<"El numero ingresado es ";
	switch(getSign(num)){
		case NEGATIVO:
			cout<<"negativo";
			break;
		case NEUTRO:
			cout<<"neutro";
			break;
		case POSITIVO:
			cout<<"positivo";
	}
	cout<<".\n";
	
	return 0;
}
