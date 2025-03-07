#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <ctime>
#define MIN 3221225472
#define MAX 3221226472
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

int isPrime(unsigned int num, long long &operations) {
	int cnt = 2;
	for(unsigned int i = 2; i < num; i++){
		if (num % i == 0) cnt++;
		operations++;
	}

	return cnt;
}

int main() {
	long long operations = 0;
	int primes = 0;
	clock_t t;
	string time;
	
	t = clock();
	for(unsigned int i = MIN; i <= MAX; i++)
		primes += (isPrime(i, operations)==2);
	t = clock() - t;
	time = formatTime(((long double)t)/CLOCKS_PER_SEC);

	cout << "Total: " << primes << endl;
	cout << "Operaciones: " << operations << endl;
	cout << "Tiempo: " << time << endl;

	return 0;
}
