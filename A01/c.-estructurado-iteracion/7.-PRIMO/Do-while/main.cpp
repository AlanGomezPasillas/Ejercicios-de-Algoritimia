#include <iostream>
using namespace std;

int main(){
	int num;
	bool esPrimo = true;
	cout<<"NUMERO PRIMO\n\n";
	cout<<"Ingresa un numero: ";
	cin>>num;
  
  int i=num-1;
	do{
		if(num%i==0){
			esPrimo = false;
			break;
		}
	}while(--i>1);
	
	cout<<"El numero "<<num;
	esPrimo?cout<<" es ":cout<<" no es ";
	cout<<"primo"<<endl;

	return 0;
}
