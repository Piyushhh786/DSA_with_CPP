#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(0);
    v.push_back(5);
    v.push_back(8);
    
    piyush()
    int k=0;
    int a,b;
    int count =0;
    int sum=0;
    while(k<v.size()){
        for(int i=k;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]<v[j]){
                    break;
                }
                a=i;
                b=j;
            }
        }
        for(int i=a;i<b-1;i++){
            int s = v[a]-v[i++];
            count+=s;
        }
        k=b;
        sum+=count;
    }
    cout<<sum;
}