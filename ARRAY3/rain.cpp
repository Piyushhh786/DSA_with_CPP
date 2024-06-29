#include<iostream>
#include<vector>
using namespace std;
void display(int v[],int s){
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
}

int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(0);
    v.push_back(5);
    int n= v.size();
    int prev[n];
    prev[0]=-1;
    int max = v[0];
    for(int i =1;i<n;i++){
        prev[i]=max;
        if(max<v[i])
        max = v[i];
    }
    int next[n];
    next[n-1]=-1;
    max = v[n-1];
    for(int i=n-2;i>=0;i--){
        next[i]=max;
        if(max<v[i])
        max = v[i];
    }
   
    display(prev,n);
    cout<<endl;
    display(next,n);
}