#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout<<"EL NUMERO IMPAR\n\n";
	for(;;){
		cout<<"Dame un numero: ";
		cin>>num;
		if(num%2!=0)break;
	}

	cout<<"El numero ingresado es impar\n";

	return 0;
}
