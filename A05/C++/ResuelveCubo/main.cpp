#include <algorithm>
#include <iostream>
#include <random>
#include <vector>
#include <string>
#define PIECES 26
#define MOVES 12
#define TWIST 8
#define DEPTH 10
using namespace std;

void swap(int cube[], int a, int b) {
    cube[b] = cube[a] ^ cube[b];
    cube[a] = cube[a] ^ cube[b];
    cube[b] = cube[a] ^ cube[b];
}

int isCubeSolved(int cube[], int solved[]) {
    int cnt = 0;
    for (int i = 0; i < PIECES; i++) {
	if (cube[i] == solved[i]) cnt++;
    }
    return cnt;
}

void recDeepSearch(int cube[], int solved[], vector<string> m, int d, int s, int l){
    if (isCubeSolved(cube, solved) == PIECES) { return; }
    if (d > DEPTH) { return; }

    if (l == 0 && s != 3) { 
	recDeepSearch();
    }

}

void deepSearch(int cube[], int solved[]) {
    vector<string> movements;
    if (isCubeSolved(cube, solved) == PIECES) {
	cout << "El cubo se resolvio solo!" << endl;
    } else {
	recDeepSearch(cube, solved, movements, 0, 0, 0);
    }
}

void switchMove(int x, int cube[], bool r) {
    switch (x) {
	case 0: moveCube(cube, "up", r);
		break;
	case 1: moveCube(cube, "down", r);
		break;
	case 2: moveCube(cube, "left", r);
		break;
	case 3: moveCube(cube, "right", r);
		break;
	case 4: moveCube(cube, "front", r);
		break;
	case 5: moveCube(cube, "back", r);
		break;
    }
}

void moveCube(int cube[], string side, bool rev) {
    vector<int> a;
    vector<int> v;

    if (side == "up") {
	a = {3, 12, 20, 10};
	v = {4, 21, 19,  2};
	cout << "U";
    } else if (side == "down") {
	a = {7, 16, 24, 14};
	v = {8, 25, 23,  6};
	cout << "D";
    } else if (side == "left") {
	a = {10, 18, 16, 1};
	v = { 2, 19, 25, 8};
	cout << "L";
    } else if (side == "right") {
	a = {5, 14, 22, 12};
	v = {6, 23, 21,  4};
	cout << "R";
    } else if (side == "front") {
	a = {7,  5,  3,  1};
	v = {8,  6,  4,  2};
	cout << "F";
    } else if (side == "back") {
	a = {24, 22, 20, 18};
	v = {25, 23, 21, 19};
	cout << "B";
    }

    if (rev) {
	reverse(a.begin(), a.end());
	reverse(v.begin(), v.end());
	cout << "'";
    }

    cout << ' ';

    swap(cube, a[0], a[1]); //edges
    swap(cube, a[1], a[2]);
    swap(cube, a[2], a[3]);
    swap(cube, v[0], v[1]); //vertices
    swap(cube, v[1], v[2]);
    swap(cube, v[2], v[3]);
}

void shuffleCube(int myCube[], int solvedCube[]) {
    int x;
    int t = TWIST;
    bool rev = false;
    random_device rd;
    default_random_engine generator(rd());
    copy(solvedCube, solvedCube + PIECES, myCube);
    uniform_int_distribution<int> distribution(0, 11);

    while (t--) {
        x = distribution(generator);

	if (x > 5) {
	    x -= 6;
	    rev = true;
	}
	
	switchMove(x, myCube, rev)

	rev = false;
    }
}

void printCube(int cube[]) {
    cout << endl;
    for (int i = 0; i < PIECES; i++) {
	cout << cube[i] << ' ';
    }
    cout << endl;
}

int main() {
    int solvedCube[] = {1, 12, 123, 13, 134, 14, 145, 15, 152,  //primera capa
			    2,  23,  3,  34,  4,  45,  5,  52,  //segunda capa
		        6, 62, 623, 63, 634, 64, 645, 65, 652}; //tercera capa

		    // {0, 01, 002, 03, 004, 05, 006, 07, 008,
		    //	    9,  10, 11,  12, 13,  14, 15,  16,
		    // 17, 18, 019, 20, 021, 22, 023, 24, 025}

    int myCube[PIECES];
    srand(time(nullptr));

    shuffleCube(myCube, solvedCube);

    deepSearch(myCube, solvedCube);

    printCube(myCube);
    return 0;
}
