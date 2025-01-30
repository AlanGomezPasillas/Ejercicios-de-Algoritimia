#include <iostream>
using namespace std;

int main(){
	int x;
	bool esPar;

	cout<<"PAR O IMPAR\n\n";
	cout<<"Ingresa un numero: ";
	cin>>x;

	x%2==0?esPar=true:esPar=false;

	if(esPar){
		cout<<x<<" es par.\n";
	}else{
		cout<<x<<" es impar.\n";
	}

	return 0;
}
