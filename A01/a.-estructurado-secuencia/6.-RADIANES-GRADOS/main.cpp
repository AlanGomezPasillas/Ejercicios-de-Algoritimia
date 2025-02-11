#include <iostream>
#define PI 3.1416
using namespace std;

int main(){
	float r, g;

	cout<<"RADIANES A GRADOS\n\n";
	cout<<"Ingresa el numero en radianes";
	cin>>r;

	g = r * (180/PI);

	cout<<"El numero en grados es: "<<g<<endl;

	return 0;
}
