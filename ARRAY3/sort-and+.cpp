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
    int i=0,j=s-1;
    while(i<j){
        if(i>0) i++;
        if(j<0) j--;
        if(i<0 && j>0){
            int temp;
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
        i++;
        j--;
    }
}
