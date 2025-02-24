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

bool isPrime(long long num) {
	for(long long i = 2; i < num; i++){
		if (num % i == 0) return false;
	}
	
	return true;
}

int main() {
	long long number;
	int primes = 0;
	clock_t t;
	string time;

	t = clock();
	while(1){
		cin >> number;
		if (number == -1) break;
		primes += isPrime(number);
	}
	t = clock() - t;
	
	time = formatTime(((long double)t)/CLOCKS_PER_SEC);

	cout << "Total: " << primes << endl;
	cout << "Tiempo: " << time << endl;

	return 0;
}
