#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
//! graph can have serveral methods to implement but the best way is this
//!graph can also implemet by incidence matrix V X E where we make a 2d array of row v and edges
//!and using v X v matrix in... u can easily understand by this
class graph {
private:
    unordered_map<int, list<int>> graph; // according to me this is best implementation

public:
    void addEdge(int src, int dest) {
        graph[src].push_back(dest);
       if(false) graph[dest].push_back(src); // Make edge bidirectional
    }

    void addVertex(int vertex) {
        graph[vertex]; // Insert an empty list
    }

    void display() {
        for(auto x : graph) {
            cout << x.first << ":->";
            for(int y : x.second) {
                cout << y << " ,";
            }
            cout << endl;
        }
    }
    
};


int main() {
    graph g;
    g.addVertex(3);
    g.addVertex(4);
    g.addVertex(7);
    g.addVertex(8);
    g.addVertex(6);

    // connection
    g.addEdge(3, 4);
    g.addEdge(3, 7);
    g.addEdge(4, 8);
    g.addEdge(7, 9);
    g.addEdge(9, 8);
    g.addEdge(6, 8);
    g.display();

    return 0;
}
