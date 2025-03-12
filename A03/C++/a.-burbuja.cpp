#include <iostream>
using namespace std;

void printArray(int n, int nums[]){
	for(int i = 0; i < n; i++){
		cout << nums[i] << ' ';
	}
	cout << endl;
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
	
	printArray(n, nums); //antes
	
	bubbleSort(n, nums);
	
	printArray(n, nums); //despues
	
	return 0;
}