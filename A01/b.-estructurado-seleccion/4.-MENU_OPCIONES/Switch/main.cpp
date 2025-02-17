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
	
	switch(opcion){
		case 1: cout<<"Hola amigo.";
			break;
		case 2: cout<<"Hola jeje =)";
			break;
		case 3: cout<<"Hola >:c";
			break;
		case 4: cout<<".... --- .-.. .-";
			break;
		default: cout<<"Hola raro 0w0";
	}
	cout<<endl;

	return 0;
}