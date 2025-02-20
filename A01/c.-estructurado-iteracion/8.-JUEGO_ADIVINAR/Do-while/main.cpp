#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int num, x, att;
	bool ganaste = false;
	att = 10;
	srand(time(nullptr));
	x = rand() % 100 + 1;
	//cout<<"rnum = "<<x<<endl;

	cout<<"ADIVINA EL NUMERO\n\n";
	do{	
		cout<<"INTENTO #"<<att<<endl;
		cout<<"Elige un numero del 1 al 100: ";
		cin>>num;
		if(num==x){
			ganaste = true;
			break;
		}
		cout<<"Ese no es...\n\n";
		att--;
	}while(att > 0);
	
	ganaste?cout<<"Has Ganado!!!"<<endl:
		cout<<"Perdiste =c"<<endl;

	return 0;
}
