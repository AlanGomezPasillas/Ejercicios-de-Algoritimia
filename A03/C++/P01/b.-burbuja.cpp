#include <iostream>
#include <iomanip>
using namespace std;

void printArray(int n, int nums[], int it, int &comp, int &movs){
	cout << setfill('0') <<
		"Iteracion " << setw(2) << it << " - " <<
		"Comparaciones " << setw(2) << comp << " - " <<
		"Movimientos " << setw(2) << movs << ": ";

	for(int i = 0; i < n; i++)
		cout << nums[i] << ' ';

	cout << endl;
}

void bubbleSort(int n, int nums[], int &comp, int &movs){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-1; j++){
			comp++;
			if (nums[j] > nums[j+1]){
				movs++;
				int aux = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = aux;
			}
		}
		printArray(n, nums, i+1, comp, movs);
	}
}

int main(){
	int n, num, comp, movs;
	comp = movs = 0;
	cin >> n;
	
	int nums[n];
	for(int i = 0; i < n; i++){
		cin >> num;
		nums[i] = num;
	}
	
	printArray(n, nums, 0, comp, movs); //antes
	
	bubbleSort(n, nums, comp, movs);
	
	return 0;
}
