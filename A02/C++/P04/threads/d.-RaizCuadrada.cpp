#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <thread>
#include <future>
#include <ctime>
#include <cmath>
#define N_NUM 2000000
#define N_THR 2
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

bool isPrime(long num) {
	bool res = true;
	for(long i = 2; i <= sqrt(num); i++)
		if (num % i == 0) res = false;

	return res;
}

void checkNum(promise<int>* promise, long nums[], int ind){
	int primes = 0;
	for(int i = 0; i <= N_NUM/N_THR; i++){
		primes += isPrime(nums[ind+i]);
	}
	promise->set_value(primes);
}

int main() {
	long number;
	long* numbers = new long[N_NUM];
	int primes = 0;
	clock_t t;
	string time;

	for(int i = 0; i < N_NUM; i++){
		cin >> number;
		numbers[i]=number;
	}

	t = clock();
	promise<int> pr1;
	promise<int> pr2;
	future<int> fu1 = pr1.get_future();
	future<int> fu2 = pr2.get_future();
	thread th1(checkNum, &pr1, numbers, 0);
	thread th2(checkNum, &pr2, numbers, (N_NUM/N_THR)-1);
	th1.join();	
	th2.join();	
	primes = fu1.get() + fu2.get();
	t = clock() - t;

	time = formatTime(((long double)t)/CLOCKS_PER_SEC);

	cout << "Total: " << primes << endl;
	cout << "Tiempo: " << time << endl;

	return 0;
}
