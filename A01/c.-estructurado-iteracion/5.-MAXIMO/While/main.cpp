#include <iostream>
using namespace std;

int main(){
	int max = 0;
	int cant = 5;
    
    while(cant--){
        int num;
		cout<<"Ingresa un numero: ";
		cin>>num;
        if(num>max) max=num;
    }

	cout<<"El valor maximo es: "<<max<<endl;

	return 0;
}
