#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout<<"EL NUMERO IMPAR\n\n";
	do{
		cout<<"Dame un numero: ";
		cin>>num;
	}while(num%2==0);

	cout<<"El numero ingresado es impar\n";

	return 0;
}
