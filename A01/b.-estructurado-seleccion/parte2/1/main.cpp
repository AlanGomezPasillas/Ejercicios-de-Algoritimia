#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;

	cout<<"--- Tabla de multiplicar ---\n";
	cout<<"----------------------------\n\n";
	cout<<"Ingresa la tabla a realizar: ";
	cin>>num;

	for(int i=1;i<201;i++){
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}

	return 0;
}
