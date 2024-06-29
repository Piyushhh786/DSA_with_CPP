#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;
int e;
void addConnection(int x , int y , bool biDir){
    graph[x].push_back(y);
    if(biDir)graph[y].push_back(x);
}
bool cycle_detection(int parent , int child , unordered_set<int>&s){
    if(s.find(child)!=s.end()) return false;
    s.insert(child);
    for(auto x : graph[child]){
            // cout<<x;
        if(s.find(x)==s.end()){
            bool flag = cycle_detection(child , x , s);
            if(flag) return true;

        }
        else{
            if(x!=parent)return true;
        }
    }
    return false;
}
int main(){
    cin>>v>>e;
    graph.resize(v);
    while(e--){
        int x,y;
        cin>>x>>y;
        addConnection(x , y , true);
    }
    int src;
    cin>>src;
    int child = src;
    int parent = -1;
    unordered_set<int>s;
    bool flag =cycle_detection(parent , child , s);
    cout<<flag;
}