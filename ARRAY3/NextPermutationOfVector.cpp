#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v,int s){
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
}
void reverse(int a, int b,vector<int> &v){
    int i=a;
    int j=b;
    while(i<=j){
        int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }

}
int main(){
    int idx=0;
    vector<int>v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(4);
}