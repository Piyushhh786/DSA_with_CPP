#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k=0;
    int count=0;
    int sum=0;
    int a,b,midx;
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(4);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    int ki =0;
    for(int i=0;i<v.size();i++){
        
        if(ki<v[i]){ ki=v[i]; 
        midx=i;
        }
    }
    
    cout<<midx;
    cout<<endl;
    
    while(k<midx){
        for(int i=k;i<v.size();i++){
          for(int j=i+1;j<v.size();j++){
            if(v[i]<v[j])
        {break;
        a=i;
        b=j;}
     }
        break;
            }
            for(int i=a+1;i<=b-1;i++){
                int s = v[a]-v[i];
                count+=s;
            }   
            cout<<count<<endl;
            k=b;       
        }
        k=v.size()-1;
        while(k>midx){
            for(int i=k;i>midx;i--){
                for(int j=i-1;j>midx;j--){
                if(v[i]<v[j])
        {break;
        a=i;
        b=j;}
                }
                break;
            }
            for(int i=a-1;i>=b+1;i--){
                int s = v[a]-v[i];
                sum+=s;
            }
            cout<<sum<<endl;
            k=b;
        }
        cout<<sum+count;

    }