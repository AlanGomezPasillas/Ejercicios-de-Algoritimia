using namespace std;

void printTables(int num, int it){
	/*if(!(it+1)){
		return;
	}else{*/
	if(it>0){
		printTables(num, it-1);
		cout<<num<<" x "<<it<<" = "<<num*it<<endl;
	}
}

