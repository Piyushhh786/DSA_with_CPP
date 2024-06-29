#include<iostream>
#include<string>
#include<stack>
using namespace std;
int prior(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2;
}
int main(){
    string s = "4+3+5*6/5-2";
    stack<string>st;
    stack<char>op;
    for(int i =0 ;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57) st.push(to_string(s[i]-48));
        else{
            if(op.size()==0) op.push(s[i]);
            else if(op.size()>0 && prior(s[i])>prior(op.top())) op.push(s[i]);
            else{
                while(op.size()>0&&prior(op.top())>=prior(s[i])){
                    string val2 = st.top();
                    st.pop();
                    string val1 = st.top();
                    st.pop();
                    char ch = op.top();
                    op.pop();
                    string ans = "";
                    ans+=ch+val1+val2;
                    st.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    while(op.size()!=0){
        string val2 = st.top();
        st.pop();
        string val1 = st.top();
        st.pop();
        char ch = op.top();
        op.pop();
        string ans = "";
        ans+=ch+val1+val2;
        st.push(ans);
    }
    cout<<st.top();
}