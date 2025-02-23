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

void cntDiv(long long num, int &nDiv) {
	for(long long i = 2; i < num; i++){
		if (num % i == 0) nDiv++;
	}
}

bool isPrime(int nDiv){
	return (nDiv == 2);
}

int main() {
	long long number;
	int nDiv = 2;
	clock_t t;
	string time;
	
	cin >> number;
	
	t = clock();
	cntDiv(number, nDiv);
	t = clock() - t;
	time = formatTime(((long double)t)/CLOCKS_PER_SEC);

	cout << number << ' ';
	isPrime(nDiv)? cout << "si" : cout << "no";
	cout << " es primo." << endl;
	cout << "Tiempo: " << time << endl;

	return 0;
}
