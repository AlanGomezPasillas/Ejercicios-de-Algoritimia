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

void selectionSort(int n, int nums[], int &comp, int &movs){
	for(int i = 0; i < n-1; i++){
		int min = i;
		for(int j = i+1; j < n; j++){
			comp++;
			if(nums[j] < nums[min]){
				movs++;
				min = j;
			}
		}
		if(min != i) swap(nums, i, min);
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
	
	selectionSort(n, nums, comp, movs);
	
	cout << "Ahora: " << arrStr(n, nums) << endl;
	
	return 0;
}