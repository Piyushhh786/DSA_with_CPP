#include<iostream>
#include<string>
using namespace std;
void dis(string s,string a){

}
// void dis(string s,int n , string a,int idx){
    // if(idx==n){
    //     cout<<a;
    //     return ;
    // }
    // if(s[idx]!='a') a+=s[idx];
    // dis(s,n,a,idx+1);

// }
void removechar(string ans,string org){
    if(org==""){
        cout<<ans;
        return;
    }
    char ch = org[0];
    if(ch=='a') removechar(ans,org.substr(1));
    else removechar(ans+org[0],org.substr(1));
}
int main(){
    string s = "piyush palariya";
    int n= s.size();
    // dis(s,n,"",0);
    removechar(s,"");
}