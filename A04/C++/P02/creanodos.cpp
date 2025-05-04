#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string name;
    vector<string> names;

    while (1) {
	getline(cin, name);
	if (name == "-1") break;
	if (names.size() > 0) {
	    auto res = find(names.begin(), names.end(), name);
	    if (*res != name){
		names.push_back(name);
	    } else {
		//cout << "El nombre ya existe." << endl;
	    }
	} else {
	    names.push_back(name);
	}
    }

    for(int i = 0; i < names.size(); i++) {
	cout << i+1 << " " << names.at(i) << endl;
    }

    return 0;
}
