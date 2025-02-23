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
		setw(2) << sec << '.' << milisec;
	
	return time.str();
}

bool isPrime(long long num) {
	bool res = true;
	for(long long i = 2; i < num; i++){
		if (num % i == 0) res = false;
	}
	
	return res;
}

int main() {
	long long number;
	bool prime;
	clock_t t;
	string time;
	
	cin >> number;
	
	t = clock();
	prime = isPrime(number);
	t = clock() - t;
	time = formatTime(((long double)t)/CLOCKS_PER_SEC);

	cout << number << ' ';
	prime? cout << "si" : cout << "no";
	cout << " es primo." << endl;
	cout << "Tiempo: " << time << endl;

	return 0;
}
