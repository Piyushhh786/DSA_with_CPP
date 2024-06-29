#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class DSU{
private:
    vector<unordered_set<int>>ds;
public:
    void push(unordered_set<int>&s){
        ds.push_back(s);
    }
    void pop(){
        ds.pop_back();
    }
    int find(int x){
        for(int i = 0 ; i< ds.size() ; i++){
            if(ds[i].find(x)!=ds[i].end()) return i ;
        }
        cout<<x<<"Is not present"<<endl;
        return -1;
    }
    void UNION(int x , int y){
        int Idx1 = find(x);
        int Idx2 = find(y);
        if(Idx1==-1|| Idx2 ==-1){
            cout<<"Either x or y is not present in any set";
            return;
        }
        ds[Idx1].insert(ds[Idx2].begin(),ds[Idx2].end());
        ds.erase(ds.begin()+Idx2);
        cout<<endl;
    }
    void print(int idx){
       for(auto x : ds[idx]){
        cout<<x<<" ";
       }
    }
};
int main(){
    // unordered_set<int>a,b,c,d;
    unordered_set<int> a = {2, 7, 5};
    unordered_set<int> b = {3, 6, 1};
    unordered_set<int> c = {4, 9};
    unordered_set<int> d = {10, 11, 12};
    //insertion in dsu
    DSU ds;
    ds.push(a);
    ds.push(b);
    ds.push(c);
    ds.push(d);
    ds.UNION(2,6);
    ds.print(0);
}