#include <iostream>
using namespace std;

bool isPrime(int num) {
	bool res = true;
	for(int i = 2; i < num; i++){
		if (num % i == 0) res = false;
	}
	
	return res;
}

int main() {
	int number;
	bool prime;
	
	cin >> number;

	prime = isPrime(number);
	
	cout << number << ' ';
	prime? cout << "si" : cout << "no";
	cout << " es primo." << endl;

	return 0;
}
