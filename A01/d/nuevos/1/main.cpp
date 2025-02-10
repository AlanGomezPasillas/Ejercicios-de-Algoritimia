#include <iostream>
#include "tablas.cpp"
#define MAX 12
using namespace std;

int main(){
	int nums[]={4,12,5,23,6,7};
	for(int i=0;i<sizeof(nums)/4;i++){
		printTables(nums[i],MAX);
		cout<<endl; 
	}


	return 0;
}
