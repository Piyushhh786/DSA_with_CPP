#include<iostream>
#include<vector>
using namespace std;
void rev(int a,int b,vector<int> &v){
    int j;
    for(int i =a,j=b;i<j;i++){
        int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        j--;
    }
}
void display(vector<int>v,int s){
    for(int i=0;i<=s-1;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    int k;
    cout<<"Enter k: ";
    cin>>k;
    v.push_back(9);
    v.push_back(2);
    v.push_back(9);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
   
    int s=v.size();
    rev(0,s-1-k,v);
    rev(s-k,s-1,v);
    rev(0,s-1,v);
    display(v,s);
    }
    
