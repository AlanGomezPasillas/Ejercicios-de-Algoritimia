#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector> 
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

void criba(long long num, vector<bool> &primes){
	primes = vector<bool>(num, true);
	for(long long i = 2; i <= sqrt(num); i++) {
		for (long long j = i; j*i <= num; j++) {
			primes[(i*j)-1]=0;
		}
	}
}

bool isPrime(long long num, vector<bool> primes) {
	return primes[num-1];
}

int main() {
	vector<bool> primes;
	long long number;
	bool prime;
	clock_t t;
	string time;
	
	cin >> number;
	
	t = clock();
	criba(number, primes);
	prime = isPrime(number, primes);
	t = clock() - t;

	/*for(int i = 0; i < primes.size(); i++) 
		cout << primes.at(i) << " ";
	cout << endl;*/

	time = formatTime(((long double)t)/CLOCKS_PER_SEC);

	cout << number << ' ';
	prime? cout << "si" : cout << "no";
	cout << " es primo." << endl;
	cout << "Tiempo: " << time << endl;

	return 0;
}
