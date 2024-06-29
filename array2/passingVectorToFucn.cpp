#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v,int size){
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    v.at(2)=100;
}

int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    int l = v.size();
    display(v,l);
    cout<<endl;
    display(v,l);

}