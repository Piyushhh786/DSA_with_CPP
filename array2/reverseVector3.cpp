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
    int a,b;
    v.push_back(9);
    v.push_back(2);
    v.push_back(9);
    v.push_back(7);
    v.push_back(6);
    v.push_back(5);
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    int s=v.size();
    rev(a,b,v);
    display(v,s);

}