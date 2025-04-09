#include <iostream>
#include <sstream>
using namespace std;

string arrStr(int n, int nums[]){
	ostringstream arr;

	for(int i = 0; i < n; i++){
		arr << nums[i] << ' ';
	}

	return arr.str();
}

void swap(int nums[], int a, int b){
	nums[b] = nums[a] ^ nums[b];
	nums[a] = nums[a] ^ nums[b];
	nums[b] = nums[a] ^ nums[b];
}

void insertionSort(int n, int nums[]){
	for(int i = 1; i < n; i++){
		int j = i;
		while(j > 0 && (nums[j-1] > nums[j])){
			swap(nums, j, j-1);
			j--;
		}
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
	
	insertionSort(n, nums);
	
	cout << "Ahora: " << arrStr(n, nums) << endl;
	
	return 0;
}