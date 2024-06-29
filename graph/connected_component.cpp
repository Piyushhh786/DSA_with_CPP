#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<unordered_set>
using namespace std;
class graph {
private:
    unordered_map<int, list<int>> graph; // according to me this is best implementation
    // unordered_set<int>v;
    vector<int>v;

public:
    void addEdge(int src, int dest) {
        graph[src].push_back(dest);
        // vertex.insert(src);
        // vertex.insert(dest);
       if(true) graph[dest].push_back(src); // Make edge bidirectional
    }
    list<int> ListOfConnections(int src){
        return graph[src];
    }
    void addVertex(int vertex) {
        graph[vertex]; // Insert an empty list
        v.push_back(vertex);
    }
    vector<int> vertex(){
        return v;
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
void dfs(graph g , int src , unordered_set<int>&s){
    if(s.find(src)!=s.end()) return;
    s.insert(src);
    for(auto x : g.ListOfConnections(src)){
        if(s.find(x)==s.end()){
            dfs(g , x , s);
        }
    }
}
int connected_component(graph g , unordered_set<int>&s){
    int count = 0;
    for(auto x : g.vertex()){
        if(s.find(x) == s.end()){
            dfs(g , x , s);
            count++;
        }
    }
    return count;colo
    
}
int main(){
    graph g;
    g.addVertex(2);
    g.addVertex(3);
    g.addVertex(4);
    g.addVertex(6);
    g.addVertex(7);
    g.addVertex(8);
    g.addVertex(9);
    g.addVertex(1);
    g.addEdge(2,3);
    g.addEdge(2,6);
    g.addEdge(3,4);
    g.addEdge(4,6);
    g.addEdge(7,9);
    g.addEdge(8,1);
    g.addEdge(7,8);
    g.addEdge(9,1);
    
    //connected component...
    unordered_set<int>s;
    cout<<connected_component(g , s);
}