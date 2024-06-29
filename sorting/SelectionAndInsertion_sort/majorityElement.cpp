#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(3);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(3);
    v.push_back(3);
    int n=9;
    int iidx;
    int fidx=0;
     sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        iidx=fidx;
        if(v[i]!=v[i+1]){
            fidx=i+1;
        }
        if((fidx-iidx)>(n/2)) cout<<v[fidx-1];
    }
	
}