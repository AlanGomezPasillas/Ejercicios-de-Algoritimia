#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout<<"EL NUMERO IMPAR\n\n";
	while(num%2==0){
		cout<<"Dame un numero: ";
		cin>>num;
	}

	cout<<"El numero ingresado es impar\n";

	return 0;
}

