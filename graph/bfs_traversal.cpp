#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<unordered_set>
using namespace std;
class graph {
private:
    unordered_map<int, list<int>> graph; // according to me this is best implementation

public:
    void addEdge(int src, int dest) {
        graph[src].push_back(dest);
       if(true) graph[dest].push_back(src); // Make edge bidirectional
    }
    list<int> ListOfConnections(int src){
        return graph[src];
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
void displayByBfs(graph g , int src){
    //?by bfs;
    unordered_set<int>s;
    queue<int>q;
    q.push(src);
    s.insert(src);
    while(q.size()>0){
        int curr = q.front();
        q.pop();
        cout<<curr<<" ";
        list<int> l = g.ListOfConnections(curr);
        for(auto x : l){
            if(s.find(x)==s.end()){
                q.push(x);
                s.insert(x);
            }
        }
    }
}
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
    cout<<endl<<endl;
    //?bfs traversal
    displayByBfs(g , 6);
    //* go in the shop and think about shortest path..
}
