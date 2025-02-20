#include <iostream>
using namespace std;

int main(){
	int f, c;

	cout<<"Ingresa el numero de filas: ";
	cin>>f;
	cout<<"Ingresa el numero de columnas: ";
	cin>>c;
    
    while(f--){
        int _c = c;
        while(_c--) cout<<"*";
        cout<<"\n";
    }

	return 0;
}
