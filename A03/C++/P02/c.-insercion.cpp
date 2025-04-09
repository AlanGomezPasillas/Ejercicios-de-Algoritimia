#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <ctime>
using namespace std;

string formatTime(long double t) {
	ostringstream time;
	int hour, min, sec, milisec;

	hour = t/3600;
	t = t - (hour*3600);
	min = t/60;
	t = t - (min*60);
	sec = t;
	t = t - (sec/1);
	milisec = t*10000;

	time << setfill('0') <<
		setw(2) << hour << ':' <<
		setw(2) << min << ':' <<
		setw(2) << sec << '.' <<
		setw(4) << milisec;

	return time.str();
}

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
	string time;
	int n, num;
	cin >> n;
	time_t t;
	
	int nums[n];
	for(int i = 0; i < n; i++){
		cin >> num;
		nums[i] = num;
	}
	
	cout << "Antes: " << arrStr(n, nums) << endl;
	
	t = clock();
	insertionSort(n, nums);
	t = clock() - t;
	time = formatTime(((long double)t)/CLOCKS_PER_SEC);
	
	cout << "Ahora: " << arrStr(n, nums) << endl;
	cout << "Tiempo: " << time << endl;
	
	return 0;
}