#include <iostream>
using namespace std;

void cantDivCiclo(int num, int it, int &cnt){
	if(it>1){
		if(num%it==0)cnt++;
		cantDivCiclo(num, it-1, cnt);
	}
}

int cantDiv(int num){
	int cnt = 0;
	int it = num-1;
	
	cantDivCiclo(num, it, cnt);

	return cnt;
}

int main(){
	int num;

	cout<<"CUANTOS DIVISORES\n\n";
	cout<<"Ingresa un numero: ";
	cin>>num;

	cout << "El numero "<<num<<" tiene "
		<<cantDiv(num)<<" divisores"
		<<endl;

	return 0;
}
