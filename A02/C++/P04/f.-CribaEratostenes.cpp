#include <iostream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <string>
#include <ctime>
#include <cmath>
#define N 2000000
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

void criba(bool primes[], long max) {
	for(long i = 2; i <= sqrt(max+1); i++)
		if(primes[i])
			for (long j = i; j*i <= max+1; j++)
				primes[(i*j)]=0;
}

int main() {
	long number, max = 0;
	long* numbers = new long[N];
	int operations = 0;
	int nPrimes = 0;
	clock_t t;
	string time;
	
	for(int i = 0; i < N; i++){
		cin >> number;
		if (number > max) max = number;
		numbers[i] = number;
	}

	bool* primes = new bool[max];
	for(long i = 0; i < max; i++) primes[i] = 1;
	
	criba(primes, max);

	t = clock();
	for(int i = 0; i < N; i++){nPrimes += primes[numbers[i]]; operations++;}
	t = clock() - t;

	delete [] numbers;
	delete [] primes;

	time = formatTime(((long double)t)/CLOCKS_PER_SEC);

	cout << "Total: " << nPrimes << endl;
	cout << "Operaciones: " << operations << endl;
	cout << "Tiempo: " << time << endl;

	return 0;
}
