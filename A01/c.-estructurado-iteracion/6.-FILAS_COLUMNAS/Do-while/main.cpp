#include <iostream>
using namespace std;

int main(){
	int f, c;

	cout<<"Ingresa el numero de filas: ";
	cin>>f;
	cout<<"Ingresa el numero de columnas: ";
	cin>>c;
    
    do{
        int _c = c;
        while(_c--) cout<<"*";
        cout<<"\n";
    }while(--f);

	return 0;
}
