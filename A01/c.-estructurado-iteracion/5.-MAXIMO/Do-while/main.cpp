#include <iostream>
using namespace std;

int main(){
	int max = 0;
	int cant = 5;
    
	do{
		int num;
		cout<<"Ingresa un numero: ";
		cin>>num;
		if(num>max) max=num;
	}while(--cant);

	cout<<"El valor maximo es: "<<max<<endl;

	return 0;
}
