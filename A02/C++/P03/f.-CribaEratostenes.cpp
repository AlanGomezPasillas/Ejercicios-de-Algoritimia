#include <iostream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <string>
#include <ctime>
#include <cmath>
//#define MIN 3221225472
//#define MAX 3221226472
#define MIN 20
#define MAX 50
#define SIZE 31
#define ull unsigned long long int
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

void criba(ull num1, ull num2, bool (&primes)[SIZE]){
	//cout<<sqrt(num2)<<' '<<num2<<' '<<(2<=sqrt(num2))<<endl;
	for(ull i = num1; i <= sqrt(num2); i+=1){
		//cout<<i<<' '<<endl;
		//printf("%d\n",i);
		if(primes[num1-i])
			for (ull j = 2; j*i <= num2; j+=1){
				//printf("%d\n",i*j);
				primes[(i*j)-num1]=0;
			}
	}
}

int main() {
	bool primes[SIZE];
	unsigned int nPrimes = 0;
	clock_t t;
	string time;
	
	for(int i = 0; i < SIZE; i++)
		primes[i] = 1;
	
	t = clock();
	criba(MIN, MAX+1, primes);
	for(int i = 0; i < SIZE; i++){
		nPrimes += primes[i];
		cout<<i+MIN<<" "<<primes[i]<<endl;
	}
	t = clock() - t;

	time = formatTime(((long double)t)/CLOCKS_PER_SEC);

	cout << "Total: " << nPrimes << endl;
	cout << "Tiempo: " << time << endl;

	return 0;
}
