#include <iostream>
using namespace std;

int main(){
	int n, res = 0;

	cout<<"SUMA DE 1 a n\n\n";
	cout<<"Dame el numero n: ";
	cin>>n;

	for(int i=1;i<=n;i++){
		res+=i;
	}
	
	cout<<"La suma de 1 a "<<n<<" es: "<<res<<endl;
	
	return 0;
}
