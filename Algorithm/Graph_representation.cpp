#include <bits/stdc++.h>
using namespace std;

int main() {
    int numNodes;
    cout<<"Enter the number of nodes: ";
    cin>>numNodes;

    // Using arrays to represent edges
    int edges[numNodes +1][numNodes+1] = {0}; // Initialize with zeros

    int numEdges;
    cout << "Enter the number of edges: ";
    cin >> numEdges;

    // Using a map to represent adjacency list
    map<int, vector<int>> adjList;

    // Adding edges to the adjacency list
    cout << "Enter the edges (format: from to):" << endl;
    for (int i = 0; i < numEdges; ++i) {
        int from, to;
        cin >> from >> to;
        adjList[from].push_back(to);
    }
    
    // Populate the adjacency matrix from the adjacency list
    for(auto &entry : adjList) {
        int from = entry.first;
        for (int neighbor : entry.second) {
            edges[entry.first][neighbor] = 1;
        }
    }
    
    // Printing adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    for (int i = 1; i <= numNodes; ++i) {
        for (int j = 1; j <= numNodes; ++j) {
            cout << edges[i][j] << " ";
        }
        cout << endl;
    }
      
    // Printing adjacency list
    cout << "Adjacency List:" << endl;
    for (const auto &entry : adjList) {
        cout << entry.first << " -> ";
        for (int neighbor : entry.second) {
            cout << neighbor << " ";
        }
        cout << endl;
    }

    return 0;
}
