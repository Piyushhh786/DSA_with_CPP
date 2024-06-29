#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v;
int e;
vector<int> parent;
vector < int > r;
void addConnection(int x , int y , bool biDir){
    graph[x].push_back(y);
    if(biDir)graph[y].push_back(x);
}
//making DSU(dissjoint set union by parent and rank)
int get(int x ){
    if(x==parent[x]) return x;
    return parent[x] = get(parent[x]);
}
bool Union(int a , int b){
    a = get(a);
    b = get(b);
    if(a==b) return true;
    if(r[a]<=r[b]){
        parent[a] = b;
        r[b]++;
    }
    else {
        parent[b] = a;
        r[a]++;
    }
    return false;
}
int main(){
    cin>>v>>e;
    graph.resize(v);
    parent.resize(v);
    r.resize(v);
    for(int i = 0 ; i < v ; i++){
        parent[i]=i;
    }
    //? making graph7 7
    while(e--){
        int x , y ;
        cin>>x>>y;
        addConnection(x,y,true);
    }
    // now detect the cycle
    //?travelling by bfs and checkinng is cycle present or not
    queue<int>q;
    int src;
    cout<<"enter src:";
    cin>>src;
    q.push(src);
    unordered_set<int>s;
    // s.insert(src);
    bool cycle_detect = false;
    while(q.size()){
        // cout<<-1;
        int temp = q.front();
        q.pop();
        s.insert(temp);
        for(auto x : graph[temp]){
                    // cout<<"0";
            if(s.find(x)==s.end()){
                cycle_detect = Union(temp , x);
                if(cycle_detect) break;
                q.push(x);
            }
        }
        if(cycle_detect) break;
    }
    if(cycle_detect) cout<<"cycle is present"<<endl;
    else cout<<"cycle is not present"<<endl;
}