#include<vector>
#include<iostream>
using namespace std;
void display(vector<int>a,int s){
     for(int i=0;i<=s-1;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(5);
    int s = v.size();
    vector<int>a(v.size());
    for(int i=0;i<v.size();i++){
        int j=v.size()-1-i;
        a[i]=v[j];
    }
    display(a,s);
    
} 
