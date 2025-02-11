#include <iostream>
using namespace std;

bool isEven(int num){
	return !(num & 1);
}

int main(){
	int num; 
	
	cout<<"IMPAR FINALIZA\n\n";
	cout<<"Ingresa un numero: ";
	cin>>num;

	while(isEven(num)){
		cout<<"Ingresa otro numero: ";
		cin>>num;
	}

	return 0;
}
