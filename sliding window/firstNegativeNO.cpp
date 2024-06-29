#include<iostream>
#include<vector>
using namespace std;
int main(){
    int p=-1;
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    vector<int>v;
    int n=sizeof(arr)/4;
    int k=3;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            v.push_back(arr[i]);
            p=i;
            break;
        }
    }
    // cout<<p<<endl;
    if(p==-1) v.push_back(1);

    int i=1;
    int j=k;
    while(j<n){
        if(i<=p){
            v.push_back(arr[p]);
        }
        else{
            p=-1;
            for(int x=i;x<=j;x++){
                if(arr[x]<0){
                    p=x;
                break;
                }
                
            }
            if(p!=-1) v.push_back(arr[p]);
            else v.push_back(1);
        }
        i++;
        j++;
    }
    int s=v.size();
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
    

    
}