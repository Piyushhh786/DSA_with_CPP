#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class graph {
public:
    unordered_map<int , list<pair<int,int>>> g; // one pair is for weight

public:
    void addEdge(int src, int dest, int wgt, bool bi_dir) {
        g[src].push_back({dest,wgt});
        if (bi_dir) 
            g[dest].push_back({src , wgt});
    }
    void display() {
        for (auto x : g) {
            cout<<"src:"<<x.first<<"->";
            for(auto y : x.second){
                cout<<y.first<<" "<<y.second<<",";
            }
            cout<<endl;
        }
    }
    
};


int main() {
    graph g;
    g.addEdge(3, 4, 0, false);
    g.addEdge(3, 7, 0, false);
    g.addEdge(4, 8, 0, false);
    g.addEdge(7, 9, 0, false);
    g.addEdge(9, 8, 0, false);
    g.addEdge(6, 8, 0, false);
    g.display();

    return 0;
}
