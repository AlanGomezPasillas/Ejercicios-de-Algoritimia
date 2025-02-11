#include <iostream>
#include <array>
#include <string>
using namespace std;

int main(){
	int dia;
	array<string, 7> dias={"Domingo","Lunes","Martes","Miercoles",
	"Jueves","Viernes","Sabado"};

	cout<<"DIA DE LA SEMANA\n\n";
	cout<<"Ingresa un numero del 1 al 7: ";
	cin>>dia;
	cout<<"El dia "<<dia<<" es el "<<dias[dia-1]<<'\n';

	return 0;
}
