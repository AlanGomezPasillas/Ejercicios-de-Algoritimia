#include <iostream>
using namespace std;

int main(){
	int year;
	bool isLeap=false;

	cout<<"LEAP YEAR\n\n";
	cout<<"Enter a year: ";
	cin>>year;

	if(!(year%4)) isLeap=true;
	if(!(year%100)) isLeap=false;
	if(!(year%400)) isLeap=true;
	
	if(isLeap){
		cout<<year<<" is leap year";
	}else{
		cout<<year<<" is not leap year";
	}
	cout<<endl;

	return 0;
}
