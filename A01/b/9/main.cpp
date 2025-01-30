#include <iostream>
#include <string>
using namespace std;

int main(){
	int num1, num2, res;
	string op;

	cout<<"CALCULADORA\n\n";
	cout<<"Dame el primer numero: ";
	cin>>num1;
	cout<<"Dame el segundo numero: ";
	cin>>num2;
	cout<<"Elije una operacion(suma, resta, multiplicacion, division): ";
	cin.get();
	getline(cin, op);

	if(op == "suma"){
		res = num1 + num2;
	}else if(op == "resta"){
		res = num1 - num2;
	}else if(op == "multiplicacion"){
		res = num1 * num2;
	}else if(op == "division"){
		res = num1 / num2;
	}
	
	cout<<"El resultado es: "<<res<<endl;

	return 0;
}
