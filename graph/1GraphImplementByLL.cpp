#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<list<int>>graph;
int v;// No. of vertex
void add_edge(int src , int dest , bool bi_dir){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}
void display(vector<list<int>>g){
    int s = g.size();
    for(int i = 0 ; i<s ; i++){
        cout<<i<<"->";
        for(auto x : g[i]){
            cout<<x<<" ,";
        }
        cout<<endl;

    }
}
int main(){
    cout<<"enter no. of vertex: ";
    cin>>v;
    graph.resize(v);
    int e;
    cout<<"enter no. of edges: ";
    cin>>e;
    while(e--){
        int s , d;
        cout<<"enter src: ";
        cin>>s;
        cout<<"enter dest: ";
        cin>>d;
        add_edge(s , d , true);
    }
    display(graph);
}