#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void subStr(string ans,string org){
    if(org==""){
    sort(ans.begin(),ans.end());
    cout<<ans<<endl;
        return;
    }
    
    
    subStr(ans+org[0],org.substr(1));
    
    subStr(ans,org.substr(1));
    
}
int main(){
    string s="abx";
    subStr("",s);
}