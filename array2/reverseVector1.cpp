#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v,int s){
    for(int i=0;i<=s-1;i++){
        cout<<v[i]<<" ";
    }
}
int  main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    
    int s=v.size();
    for(int i=0;i<=(v.size()-1)/2;i++){
        int j,temp;
        j=v.size()-1-i;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    display(v,s);

}