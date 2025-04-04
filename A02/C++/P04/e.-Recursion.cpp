#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <ctime>
#include <cmath>
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

bool isPrime(long num, unsigned long long &operations, long i = 2) {
	if (num == 2) return true;
	if (i > sqrt(num)) return true;
	operations++;
	if (num % i == 0) return false; 

	return isPrime(num, operations, i+1);
}

int main() {
	long number;
	unsigned long long operations = 0;
	int primes = 0;
	clock_t t;
	string time;
	
	t = clock();
	while(1){
		cin >> number;
		if (number == -1) break;
		primes += isPrime(number, operations);
	}
	t = clock() - t;
	
	time = formatTime(((long double)t)/CLOCKS_PER_SEC);

	cout << "Total: " << primes << endl;
	cout << "Operations: " << operations << endl;
	cout << "Tiempo: " << time << endl;

	return 0;
}
