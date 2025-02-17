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
	}else if(opcion == 2){
		cout<<"Hola jeje =)";
	}else if(opcion == 3){
		cout<<"Hola >:c";
	}else if(opcion == 4){
		cout<<".... --- .-.. .-";
	}else{
		cout<<"Hola raro 0w0";
	}
	cout<<endl;

	return 0;
}