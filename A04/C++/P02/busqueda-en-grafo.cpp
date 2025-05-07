#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Node {
    int id;
    string name;
    vector<int> edges;
};

struct Graph {
    int nNodes;
    int nEdges;
    vector<Node> nodes;
};

int main() {
    Graph myGraph;
    
    cin >> myGraph.nNodes;
    for (int i = 0; i < myGraph.nNodes; i++) {
	Node myNode;
	cin >> myNode.id; cin.get();
	getline(cin, myNode.name);
	myGraph.nodes.push_back(myNode);
	//cout << myNode.id << ' ' << myNode.name << endl;
    }

    cin >> myGraph.nEdges;
    for (int i = 0; i < myGraph.nEdges; i++) {
	int a, b;
	cin >> a >> b;
	myGraph.nodes[a-1].edges.push_back(b);
	myGraph.nodes[b-1].edges.push_back(a);
    }
    
    for (int i = 0; i < myGraph.nodes[34].edges.size(); i++) {
	cout << myGraph.nodes[34].edges[i] << endl;
    }

    return 0;
}
