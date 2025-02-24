#include <iostream>
#include <algorithm>
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

void criba(long long num1, long long num2, vector<bool> &primes){
	primes = vector<bool>(num2 - num1, true);
	for(long long i = 2; i <= sqrt(num2); i++) {
		if(primes.at(i-1))
		for (long long j = i; j*i <= num2; j++) {
			primes[(i*j)-num1]=0;
		}
	}
}

bool isPrime(long long num, vector<bool> primes){
	return primes.at(num);
}

int main() {
	vector<bool> primes;
	vector<long long> numbers;
	long long number, min, max;
	int nPrimes = 0;
	clock_t t;
	string time;
	
	
	while(1){
		cin >> number;
		if (number == -1) break;
		numbers.push_back(number);
	}
	if(numbers.size() > 0){
		min = *min_element(numbers.begin(), numbers.end());
		max = *max_element(numbers.begin(), numbers.end());
		criba(min, max+1, primes);
	}
	t = clock();
	for(long long i = 0; i < numbers.size(); i++){
		nPrimes += isPrime(numbers.at(i)-min, primes);
	}
	t = clock() - t;

	/*for(int i = 0; i < primes.size(); i++) 
		cout << primes.at(i) << " ";
	cout << endl;*/

	time = formatTime(((long double)t)/CLOCKS_PER_SEC);

	cout << "Total: " << nPrimes << endl;
	cout << "Tiempo: " << time << endl;

	return 0;
}
