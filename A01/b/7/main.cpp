#include <iostream>
#include <string>
using namespace std;

int main(){
	int dia, mes;
	string signo;

	cout<<"SIGNOS DEL ZODIACO\n\n";
	cout<<"Ingresa tu dia de nacimiento(DD): ";
	cin>>dia;
	cout<<"Ingresa tu mes de nacimiento(MM): ";
	cin>>mes;

	switch(mes){
		case 1:	if(dia<=20){
				signo="Capricornio";
			}else 	signo="Acuario";
		break;
		case 2: if(dia<=19){
				signo="Acuario";
			}else	signo="Piscis";
		break;
		case 3:	if(dia<=20){
				signo="Piscis";
			}else 	signo="Aries";
		break;
		case 4:	if(dia<=20){
				signo="Aries";
			}else 	signo="Tauro";
		break;
		case 5:	if(dia<=20){
				signo="Tauro";
			}else 	signo="Geminis";
		break;
		case 6:	if(dia<=20){
				signo="Geminis";
			}else 	signo="Cancer";
		break;
		case 7:	if(dia<=22){
				signo="Cancer";
			}else 	signo="Leo";
		break;
		case 8:	if(dia<=23){
				signo="Leo";
			}else 	signo="Virgo";
		break;
		case 9:	if(dia<=22){
				signo="Virgo";
			}else 	signo="Libra";
		break;
		case 10: if(dia<=23){
				signo="Libra";
			}else 	signo="Escorpio";
		break;
		case 11: if(dia<=22){
				signo="Escorpio";
			}else 	signo="Sagitario";
		break;
		case 12: if(dia<=21){
				signo="Sagitario";
			}else 	signo="Capricornio";
		break;
	}

	cout<<"Tu signo es: "<<signo<<endl;

	return 0;
}
