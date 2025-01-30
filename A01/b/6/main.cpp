#include <iostream>
using namespace std;

int main(){
	int mes;
	cout<<"MONTHS OF THE YEAR\n\n";
	cout<<"Ingresa un numero de mes: ";
	cin>>mes;
	
	switch(mes){
		case 1:	cout<<"El mes "<<mes<<" es Enero";
		break;
		case 2:	cout<<"El mes "<<mes<<" es Febrero";
		break;
		case 3:	cout<<"El mes "<<mes<<" es Marzo";
		break;
		case 4:	cout<<"El mes "<<mes<<" es Abril";
		break;
		case 5:	cout<<"El mes "<<mes<<" es Mayo";
		break;
		case 6:	cout<<"El mes "<<mes<<" es Junio";
		break;
		case 7:	cout<<"El mes "<<mes<<" es Julio";
		break;
		case 8:	cout<<"El mes "<<mes<<" es Agosto";
		break;
		case 9:	cout<<"El mes "<<mes<<" es Septiembre";
		break;
		case 10:cout<<"El mes "<<mes<<" es Octubre";
		break;
		case 11:cout<<"El mes "<<mes<<" es Noviembre";
		break;
		case 12:cout<<"El mes "<<mes<<" es Diciembre";
		break;
		default:cout<<"Error no existe un mes con ese numero.";
		break;
	}
	cout<<endl;

	return 0;
}
