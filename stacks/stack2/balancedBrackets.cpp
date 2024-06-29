#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool IsBalanced(string s){
    if(s.size()%2==1) return false;
    stack<char>st;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='(') st.push(s[i]);
        else {
            if(st.size()==0) return false;
            else st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    string s="()()((()";
    cout<<IsBalanced(s);
}