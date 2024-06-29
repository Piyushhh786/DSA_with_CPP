#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int sum =0;
    int a,b;
    cin>>n>>a>>b;
    int bobx = 0;
    int boby =0;
    vector<int>x(n);
    vector<int>y(n);
    for(int i =0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    for(int i =0;i<n;i++){
        sum =0;
        sum = abs(bobx - x[i])*a+abs(boby - y[i])*b;
        cout<<sum<<endl;
        bobx = x[i];
        boby = y[i];
    }
}