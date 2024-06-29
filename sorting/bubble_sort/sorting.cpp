#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortt(vector<int> &v){
    int n=v.size();
    //it is mine function
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(v[i]>v[j]){
    //             int temp;
    //             temp=v[i];
    //             v[i]=v[j];
    //             v[j]=temp;
    //         }
    //     }
    // }
    //acc to sir
    
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<n-i-1;j++){
            if(v[j]>=v[j+1]) {swap(v[j],v[j+1]);
            flag =false;
            }
        }
        if(flag == true) break;
    }
    
}
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    // sort(v.begin(),v.end());//O(nlogn)
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sortt(v);
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
    
}