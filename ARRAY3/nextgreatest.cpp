#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v,int s){
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>heights;
    vector<int>nrr;
    heights.push_back(0);
    heights.push_back(1);
    heights.push_back(0);
    heights.push_back(2);
    heights.push_back(1);
    heights.push_back(0);
    heights.push_back(1);
    heights.push_back(3);
    heights.push_back(2);
    heights.push_back(1);
    heights.push_back(2);
    heights.push_back(1);
    int n=heights.size();
    int max;
    nrr[n-1]=-1;
    max=heights[n-1];
    for(int i=n-2;i>=0;i--){
        nrr[i]=max;
        if(max<heights[i]){
            max=heights[i];
        }
    }
    cout<<nrr[2];

}