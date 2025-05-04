#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <ctime>
#include <map>
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

void fillMatrix(char mat[], int n1, int n2, char content) {
    for (int i = 0; i < n1; i++) {
	for (int j = 0; j < n2; j++) {
	    //mat[i][j] = content;
	    *((mat + i * n2) + j) = content;
	}
    }
}

void printMatrix(char mat[], int n1, int n2, map<int, char> &nodes) {
    for (int i = 0; i < n1; i++) {
	cout << nodes[i+1];
	for (int j = 0; j < n2; j++) {
	    cout << *((mat + i * n2) + j);
	}
	cout << endl;
    }
}

/*struct node{
    char name;
};*/

int main() {
    time_t t;
    int it = 0;
    int nNodes;
    int nMatches;
    map<int, char> nodes;
    multimap<int, int> matches;
    string time;

    cin >> nNodes;
    //node myNodes[nNodes];

    for (int i = 0; i < nNodes; i++) {	
	int num; char ch;
	cin >> num; cin.get();
	cin.get(ch);
	nodes.insert({num, ch});
    }
    
    cin >> nMatches;
    char adjMatrix[nNodes][nNodes];
    char incMatrix[nNodes][nMatches];
    fillMatrix((char*)adjMatrix, nNodes, nNodes, '0');
    fillMatrix((char*)incMatrix, nNodes, nMatches, '0');

    for (int i = 0; i < nMatches; i++) {
	int a, b;
	cin >> a >> b;
	matches.insert({a, b});
    }
    
    t = clock();
    for (auto x: matches) {
	adjMatrix[x.first-1][x.second-1] = '1';
	adjMatrix[x.second-1][x.first-1] = '1';
	incMatrix[x.first-1][it] = '1';
	incMatrix[x.second-1][it] = '1';
	it++;
    }
    t = clock() - t;
    time = formatTime(((long double)t)/CLOCKS_PER_SEC);

    cout << "Matriz de Adyacencia:" << endl << " ";
    for (int i = 0; i < nNodes; i++) {
	cout << nodes[i+1];
    }
    cout << endl;
    printMatrix((char*)adjMatrix, nNodes, nNodes, nodes);

    cout << endl << "Matriz de Incidencia:" << endl << " ";
    for (int i = 0; i < nMatches; i++) {
	cout << i+1;
    }
    cout << endl;
    printMatrix((char*)incMatrix, nNodes, nMatches, nodes);
    
    cout << endl << "Tiempo: " << time << endl;

    return 0;
}
