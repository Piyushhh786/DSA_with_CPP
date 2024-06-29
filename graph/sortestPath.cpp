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
unordered_map<int,int> shortestDistanceFromSrc(graph g , int src){
    unordered_map<int,int>m;//storing nodes,shortest distance
    int count = 0;
    queue<pair<int,int>>q;
    q.push({src,0});
    m[src] = count;
    // unordered_set<int>s;
    while(q.size()>0){
        pair<int,int>temp = q.front();
        int curr = temp.first;
        int SD = temp.second;
        // s.insert(curr);
        // count++;
        q.pop();

        for(auto x : g.ListOfConnections(curr)){
            if(m.find(x)==m.end()){
               q.push({x,SD+1});
               m[x] = SD+1;
            }
        }
    }
    return m;

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
    // displayByBfs(g , 6);
    //* go in the shop and think about shortest path..
    cout<<endl;
    cout<<"....sortest distances...."<<endl;
    unordered_map<int,int>m = shortestDistanceFromSrc(g,3);
    for(auto x : m){
        cout<<x.first <<" "<<x.second<<endl;
    }

}
