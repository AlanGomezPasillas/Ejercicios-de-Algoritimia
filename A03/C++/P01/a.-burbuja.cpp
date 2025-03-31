#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string arrStr(int n, int nums[]){
	ostringstream arr;

	for(int i = 0; i < n; i++){
		arr << nums[i] << ' ';
	}

	return arr.str();
}

void bubbleSort(int n, int nums[]){
	for(int i = 0; i < n-1; i++)
		for(int j = 0; j < n-1; j++)
			if (nums[j] > nums[j+1]){
				int aux = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = aux;
			}
}

int main(){
	int n, num;
	cin >> n;
	
	int nums[n];
	for(int i = 0; i < n; i++){
		cin >> num;
		nums[i] = num;
	}
	
	cout << "Antes: " << arrStr(n, nums) << endl;
	
	bubbleSort(n, nums);
	
	cout << "Ahora: " << arrStr(n, nums) << endl;
	
	return 0;
}
