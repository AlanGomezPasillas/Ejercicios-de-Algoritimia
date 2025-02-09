#include <iostream>
#include <string>
using namespace std;

enum days {DOMINGO = 1, LUNES, MARTES, MIERCOLES,
		JUEVES, VIERNES, SABADO};

string day(int num){
	string d;
	
	switch(num){
		case DOMINGO:
			d = "Domingo";
			break;
		case LUNES:
			d = "Lunes";
			break;
		case MARTES:
			d = "Martes";
			break;
		case MIERCOLES:
			d = "Miercoles";
			break;
		case JUEVES:
			d = "Jueves";
			break;
		case VIERNES:
			d = "Viernes";
			break;
		case SABADO:
			d = "Sabado";
			break;
	}
	
	return d;
}

int main(){
	int num;
	
	cout<<"DIAS DE LA SEMANA\n\n";
	cout<<"Ingresa un numero: ";
	cin>>num;
	
	cout<<"El dia "<<num<<" es el "<<day(num);
	
	
	return 0;
}