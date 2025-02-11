#include <iostream>
using namespace std;

int cantFib(int num){
	if(num==0){
		return 0;
	}else if(num==1){
		return 1;
	}else return cantFib(num-1)+cantFib(num-2);
}

int main(){
	int num;

	cout<<"FIBONACCI\n";
	do{
		cout<<"\nIngresa un numero(-1 para salir): ";
		cin>>num;
		if(num==-1)break;
		cout<<"El resultado es: "<<cantFib(num-1)<<endl;
	}while(1);
	return 0;
}
