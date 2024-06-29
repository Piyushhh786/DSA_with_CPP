#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v,int s){
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>prr;
    vector<int>nrr;
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    int s = v.size();
    display(v,s);
    cout<<endl;
    for(int i=0;i<s;i++){
        int max=-1;
        prr[i]=max;
        if(max<v[i])
        max = v[i];
    }
    int p = prr.size();
    display(prr,p);
    cout<<endl;
    
  
    for(int j =1,i=s-j;i<v.size();i++,j++){
        int max=-1;
        nrr[i]=max;
        if(max<v[i]) max = v[i];
        
    }
    int n= nrr.size();
    display(nrr,n);


}