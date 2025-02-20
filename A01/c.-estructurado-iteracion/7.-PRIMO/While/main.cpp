#include <iostream>
using namespace std;

int main(){
	int num;
	bool esPrimo = true;
	cout<<"NUMERO PRIMO\n\n";
	cout<<"Ingresa un numero: ";
	cin>>num;

  int i=num-1;
	while(--i>1){
		if(num%i==0){
			esPrimo = false;
			break;
		}
	}
	
	cout<<"El numero "<<num;
	esPrimo?cout<<" es ":cout<<" no es ";
	cout<<"primo"<<endl;

	return 0;
}
