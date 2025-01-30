#include <iostream>
using namespace std;

int main(){
	int f, c;

	cout<<"Ingresa el numero de filas: ";
	cin>>f;
	cout<<"Ingresa el numero de columnas: ";
	cin>>c;

	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			cout<<"*";
		}
		cout<<"\n";
	}

	return 0;
}
