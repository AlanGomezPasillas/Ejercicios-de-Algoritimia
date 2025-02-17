#include <iostream>
using namespace std;

int main(){
	int opcion;
	cout<<"MENU PRINCIPAL\n\n";
	cout<<"1.- Saludo\n";
	cout<<"2.- Saludo Feliz\n";
	cout<<"3.- Saludo Enojado\n";
	cout<<"4.- Saludo Morse\n";
	cout<<"\nElije una opcion: ";
	cin>>opcion;
	
	if(opcion == 1){
		cout<<"Hola amigo.";
	}
	if(opcion == 2){
		cout<<"Hola jeje =)";
	}
	if(opcion == 3){
		cout<<"Hola >:c";
	}
	if(opcion == 4){
		cout<<".... --- .-.. .-";
	}
	if(opcion < 1 || opcion > 4){
		cout<<"Hola raro 0w0";
	}
	cout<<endl;

	return 0;
}