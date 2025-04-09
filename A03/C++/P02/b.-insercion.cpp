#include <iostream>
#include <iomanip>
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

void insertionSort(int n, int nums[], int &comp, int &movs){
	for(int i = 1; i < n; i++){
		comp++;
		int j = i;
		while(j > 0 && (nums[j-1] > nums[j])){
			movs++;
			swap(nums, j, j-1);
			j--;
		}
		cout<< setfill('0')
			<< "Iteracion " << setw(2) << i 
			<< " - Comparaciones " << setw(2) << comp 
			<< " - Movimientos " << setw(2) << movs 
			<< ": " << arrStr(n, nums) << endl;
	}
}

int main(){
	int n, num, comp = 0, movs = 0;
	cin >> n;
	
	int nums[n];
	for(int i = 0; i < n; i++){
		cin >> num;
		nums[i] = num;
	}
	
	cout << "Antes: " << arrStr(n, nums) << endl;
	
	insertionSort(n, nums, comp, movs);
	
	cout << "Ahora: " << arrStr(n, nums) << endl;
	
	return 0;
}