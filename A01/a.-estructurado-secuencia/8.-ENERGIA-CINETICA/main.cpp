#include <iostream>
using namespace std;

int main(){
	float Ec, m, v;
	cout<<"ENERGIA CINETICA\n\n";
	cout<<"Ingresa la cantidad de masa: ";
	cin>>m;
	cout<<"Ingresa la velocidad: ";
	cin>>v;

	Ec = 0.5*m*(v*v);

	cout<<"La energia cinetica es: "<<Ec<<endl;

	return 0;
}
