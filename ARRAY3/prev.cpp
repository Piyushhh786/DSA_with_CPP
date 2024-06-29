#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v,int s){
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>prr;
    vector<int>nrr;
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    int s = v.size();
    display(v,s);
    cout<<endl;
    prr[0]=-1;
    for(int i=1;i<s;i++){
        int max=v[0];
        prr[i]=max;
        if(max<v[i])
        max = v[i];
    }
    display(prr,s);
}
