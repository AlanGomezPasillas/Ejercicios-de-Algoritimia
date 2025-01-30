#include <iostream>
using namespace std;

int main(){
	int num1, num2, res;
	
	cout<<"SUMA O PRODUCTO\n\n";
	cout<<"Ingresa el primer numero: ";
	cin>>num1;
	cout<<"Ingresa el segundo numero: ";
	cin>>num2;

	if(num1 > 0 && num2 > 0){
		res = num1 * num2;
	}else{
		res = num1 + num2;
	}

	cout<<"El resultado es: "<<res<<endl;

	return 0;
}
