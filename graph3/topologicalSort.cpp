//topological sort is a sorting which give an information about graph is proper DAG or not.
//* it is apply  in directd graph 

#include<bits/stdc++.h>
using namespace std;
vector<list<int>>graph;
int v ;
void add_edge(int a , int b , bool biDir){
    graph[a].push_back(b);
    if(biDir) graph[b].push_back(a);
}
bool topo_sort( vector<list<int>>&v){
    vector<int>arr(graph.size(),0);// for storing indegree of each index
    //firstly make queue
    queue<int>q;
    //filling in degree
    for(int i = 0 ; i< graph.size() ; i++){
        for(int x : graph[i]){
            arr[x]++;
        }
    }
    // filling in queue
    for(int i = 0 ; i< graph.size(); i++){
        if(arr[i]==0) q.push(i);
    }
    // cout<<-1;
    //making bfs
    while(q.size()){
        int temp = q.front();
        q.pop();
        for(auto x : graph[temp]){
            arr[x]--;
            if(arr[x]==0)q.push(x);
        }
    }
    for(int x : arr){
        if(x!=0) return false;
    }
    return true;

}
int main(){
    cin>>v;
    int e;
    cin>>e;
    graph.resize(v,list<int>());
    while(e--){
        int x , y ; 
        cin>>x>>y;
        add_edge(x , y , false);
    }
   cout<<topo_sort(graph);

