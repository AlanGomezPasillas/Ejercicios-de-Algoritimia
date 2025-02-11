#include <iostream>
using namespace std;

int cantFib(int num){
	int sum;
	if(num==0){
		//cout<<0<<" ";
		return 0;
	}else if(num==1){
		//cout<<1<<" ";
		return 1;
	}else{
		sum=cantFib(num-1)+cantFib(num-2);
		return sum;
	}
}

int main(){
	int num;

	cout<<"FIBONACCI\n";
	do{
		cout<<"\nIngresa un numero(-1 para salir): ";
		cin>>num;
		
		if(num==-1)break;

		cout<<"El resultado es: ";
		for(int i=0; i<num; i++){
			cout<<cantFib(i)<<" ";
		}
		cout<<endl;

	}while(1);
	return 0;
}
