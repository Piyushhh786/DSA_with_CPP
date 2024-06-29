#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int max=0;
    
    string s="piyushpalarrrriyaa";
    for(int i=0;i<s.size();i++){
        int count=0;
        for(int j=1+i;j<s.size();j++){
            if(s[i]==s[j]) count++;
        }
        if(count>max) max=count+1;
    }
    cout<<max<<endl;
    int mx = max;
     max=0;
     for(int i=0;i<s.size();i++){
        int count=1;
        for(int j=1+i;j<s.size();j++){
            if(s[i]==s[j]) count++;
        }

        if((count)==mx) cout<<s[i]<<" "<<mx;
    }
}