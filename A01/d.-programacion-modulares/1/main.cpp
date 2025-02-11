#include <iostream>
using namespace std;

bool isPair(int num){
	//return !(num%2);
	//cout<<(num & 1)<<endl;
	return (num & 1);
}

int main(){
	int num;
	
	cout<<"PAR O IMPAR\n\n";
	cout<<"Ingresa un numero: ";
	cin>>num;
	
	cout<<"El "<<num<<" es ";
	isPair(num)?cout<<"impar":cout<<"par";
	cout<<endl;
	
	return 0;
}
