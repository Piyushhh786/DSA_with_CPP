#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
string removeDuplicate(string & s){
    int n = s.size();
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<n;i++){
        if(st.top()!=s[i]) {
            st.push(s[i]);
        }
    }
    s="";
    // n=st.size();
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s="aaabccdgg";
    removeDuplicate(s);//! this question is also done by array;;;
    cout<<s;
    
    
}