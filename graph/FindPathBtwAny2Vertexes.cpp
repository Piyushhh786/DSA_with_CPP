#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<list>
#include<vector>
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
       if(true) graph[dest].push_back(src); // Make edge bidirectional
    }
    list<int> ListOfConnections(int src){
        if(graph.find(src)==graph.end()){
            cout<<"source is not present!!";
            return list<int>();
        }
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
    bool path(int src , int trgt , unordered_set<int>&s){
        if(src == trgt) return true;
        s.insert(src);
        for(auto neighbour:graph[src]){
            if(s.find(neighbour)==s.end()){//not find
                bool flag = path(neighbour , trgt , s);
                if(flag) return true;
            }
        }
        return false;
    }
    
};
void dfs(graph g , int src , int trgt , vector<vector<int>&ans ,vector<int>&v , unordered_set<int>&s ){
    s.insert(src);
    v.push_back(src);
    if(src == trgt){
        ans.push_back(v);
        v.resize(0);
        return;
    }
    for(auto neighbour : g.ListOfConnections(src)){
        if(s.find(neighbour)==s.end()){
            dfs(g,neighbour , trgt , ans , v);
        }
    }
    return ;

}
vector<vector<int> allPath(graph g ,int src , int trgt){
    vector<vector<int>ans;
    vector<int>v;
    unordered_set<int>s;
    dfs(g , src , trgt , ans ,v ,s);
    return ans;
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
    unordered_set<int>s;
    cout<<g.path(3 , 0 , s );
    cout<<endl<<endl;
    vector<vector<int>v = allPath(g , 6 , 9);
    for(auto x : v){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}
