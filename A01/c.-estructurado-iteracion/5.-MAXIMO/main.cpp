#include <iostream>
#include <array>
#define CANTIDAD 5
using namespace std;

int main(){
	int max;
	array<int, CANTIDAD> nums;

	for(int i=0; i<CANTIDAD; i++){
		cout<<"#"<<i+1<<" Ingresa un numero: ";
		cin>>nums[i];
	}
	max=nums[0];

	for(auto it = nums.begin(); it != nums.end(); ++it){
		*it>max?max=*it:0;
	}

	cout<<"El valor maximo es: "<<max<<endl;

	return 0;
}
