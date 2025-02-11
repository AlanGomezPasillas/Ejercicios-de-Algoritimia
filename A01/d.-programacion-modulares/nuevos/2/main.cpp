#include <iostream>
using namespace std;

int fact(int num){
	int total = 1;
	for(int i=1;i<=num;i++){
		total *= i;
	}
	
	return total;
}

int main(){
	int num;

	cout<<"FACTORIAL\n";
	do{
		cout<<"\nIngresa un numero(-1 para salir): ";
		cin>>num;

		cout<<"!"<<num<<" = "<<fact(num)<<endl;

	}while(num!=-1);
	
	return 0;
}
