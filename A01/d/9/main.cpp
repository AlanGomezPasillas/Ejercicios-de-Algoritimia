#include <iostream>
using namespace std;

void cualDivCiclo(int num, int it, int &cnt){
	if(it>1){
		cualDivCiclo(num, it-1, cnt);
		if(num%it==0)cout<<it<<" ";
	}
}

void cualDiv(int num){
	int cnt = 0;
	int it = num-1;
	
	cualDivCiclo(num, it, cnt);
}

int main(){
	int num;

	cout<<"CUANTOS DIVISORES\n\n";
	cout<<"Ingresa un numero: ";
	cin>>num;

	cout << "El numero "<<num<<" tiene:\n";
	cualDiv(num);
	cout<<"\ncomo divisores"<<endl;

	return 0;
}
