#include <iostream>
using namespace std;

int main(){
	int calif;
	cout<<"Ingresa una calificacion: ";
	cin>>calif;
	cout<<"Calificacion ingresada "<<calif<<endl;

	if(calif<60){
		cout<<"Eres un desastre!";
	}else if(calif<70){
		cout<<"Apenas la libraste";
	}else if(calif<80){
		cout<<"Vas por buen camino";
	}else if(calif<90){
		cout<<"Me impresionas!";
	}else if(calif<=99){
		cout<<"Casi alcanzas la divinidad";
	}else if(calif==100){
		cout<<"Eres un Dios!";
	}else cout<<"Numero fuera de rango";
	cout<<endl;

	return 0;
}
