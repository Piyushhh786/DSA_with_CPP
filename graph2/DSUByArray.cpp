#include<iostream>
#include<vector>
using namespace std;
class DSU{
private:
    vector<int>par;
public: 
    DSU(){
        par.resize(100,0);
    }
    int find(int x){
        return par[x];
    }
    void push(int val , int grpLeader){
        par[val] = grpLeader;
    }
    void pop(int val , int grpLeader){
        if(par[val]==grpLeader) par.erase(par.begin()+val);
        else{
            cout<<"Error"<<endl;
        }
    }
    void Union(int a , int b){
       a = find(a);
       b = find(b);
       for(int i = 0 ; i< par.size() ; i++){
            if(par[i]==b){
                par[i] = a;
            }
       }
    }
    void print(int grpLeader){
        for(int i = 0 ; i < par.size() ; i++){
            if(par[i]==grpLeader) cout<<i<<" ";
        }
    }
};
int main(){
    DSU ds;
    ds.push(0,3);
    ds.push(1,3);
    ds.push(2,3);
    ds.push(3,4);
    ds.push(4,4);
    ds.push(5,4);
    //be made 2 set whise parents are 3,4
    //? now taking union
    ds.Union(2,4);
    ds.print(3);

}