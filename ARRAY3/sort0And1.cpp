#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void display(vector<int>v,int s){
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(-5);
    v.push_back(1);
    v.push_back(-4);
    v.push_back(1);
    v.push_back(6);
    v.push_back(-1);
    int s=v.size();
    display(v,s);
    cout<<endl;
    // sort(v.begin(),v.end());
    for(int i=0;i<=s-1;i++){
        for(int j=i+1;j<=s-1;j++){
            int temp;
            if(v[i]<v[j]){
                temp=v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    
    display(v,s);
    
}