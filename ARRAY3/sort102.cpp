#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v,int s){
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
}
void swap(int* a,int* b){
     int temp;
            temp=*a;
            *a = *b;
            *b = temp;
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    int s=v.size();
    display(v,s);
    cout<<endl;
    int mid=0,low=0,hi=s-1;
    while(mid<=hi){
        if(v[mid]==0){
            swap(&v[mid],&v[low]);
            mid++;
            low++;
        }
       else if (v[mid]==1){
        mid++;
        }
        else {
            swap(&v[mid],&v[hi]);
            hi--;
        }
    }
    display(v,s);
}