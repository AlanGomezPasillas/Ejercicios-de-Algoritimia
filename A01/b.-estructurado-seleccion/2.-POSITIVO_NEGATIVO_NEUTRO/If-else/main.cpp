#include <iostream>
using namespace std;

int main(){
	int x, tipo;
	
	cout<<"NEGATIVO, POSITIVO O NEUTRO\n\n";
	cout<<"Ingresa un numero: ";
	cin>>x;

	if(x==0){
		cout<<"El numero es neutro";
	}else if(x>0){
		cout<<"El numero es positivo";
	}else{
		cout<<"El numero es negativo";
	}
	cout<<endl;

	return 0;
}