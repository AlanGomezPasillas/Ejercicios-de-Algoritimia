#include <iostream>
using namespace std;

void printTables(int num, int it){
	/*if(!(it+1)){
		return;
	}else{*/
	if(it>0){
		printTables(num, it-1);
		cout<<num<<" x "<<it<<" = "<<num*it<<endl;
	}
}

int main(){
	int num, it;

	cout << "TABLAS DE MULTIPLICAR\n\n";
	cout << "Ingresa el numero a multiplicar: ";
	cin >> num;
	cout << "Hasta que numero deseas multiplicar: ";
	cin >> it;
	
	printTables(num, it);

	return 0;
}
