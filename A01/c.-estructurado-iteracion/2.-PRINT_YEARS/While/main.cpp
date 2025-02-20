#include <iostream>
#define F_YEAR 2001
#define L_YEAR 2012
using namespace std;

int main(){
	int i=L_YEAR;
	while(i>=F_YEAR){
		cout<<"Informes del "<<i<<endl;
		i--;
	}

	return 0;
}
