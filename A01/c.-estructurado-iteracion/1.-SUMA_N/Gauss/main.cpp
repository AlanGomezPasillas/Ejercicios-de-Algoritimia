#include <iostream>
using namespace std;

int main(){
	int n, res;

	cout<<"SUMA DE 1 a n\n\n";
	cout<<"Dame el numero n: ";
	cin>>n;

	res = (n*(n+1))/2;
	
	cout<<"La suma de 1 a "<<n<<" es: "<<res<<endl;
	
	return 0;
}
