#include <iostream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <string>
#include <ctime>
#include <cmath>
#define MIN 3221225472
#define MAX 3221226472
#define SIZE MAX
#define TYPE unsigned int
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

void criba(bool primes[]){
	for(TYPE i = 2; i <= sqrt(MAX+1); i++)
		if(primes[i])
			for (TYPE j = i; j*i <= MAX+1; j++)
				primes[(i*j)]=0;
}

int main() {
	bool* primes = new bool[SIZE];
	int operations = 0;
	int nPrimes = 0;
	clock_t t;
	string time;
	
	for(TYPE i = 0; i < SIZE; i++) primes[i] = 1;
	
	criba(primes);
	t = clock();
	for(TYPE i = MIN; i <= SIZE; i++){nPrimes += primes[i]; operations++;}
	t = clock() - t;

	delete [] primes;

	time = formatTime(((long double)t)/CLOCKS_PER_SEC);

	cout << "Total: " << nPrimes << endl;
	cout << "Operaciones: " << operations << endl;
	cout << "Tiempo: " << time << endl;

	return 0;
}
