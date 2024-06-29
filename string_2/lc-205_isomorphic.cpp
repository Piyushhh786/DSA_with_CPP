#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    string s="paper";
     string t="title"; 
        vector<int>v(130,1000);
        for(int i=0;i<s.size();i++){
            int x= (int)(s[i]);
            if(v[x]==1000) v[x]=s[i]-t[i];
            else if(v[x]==s[i]-t[i])continue;
            else cout<<false<<" ";
        }
        vector<int>w(130,1000);
        for(int i=0;i<t.size();i++){
            int x= (int)(t[i]);
            if(w[x]==1000) w[x]=t[i]-s[i];
            else if(w[x]==t[i]-s[i])continue;
            else cout<<false;
        }
        cout<<true;
    }
