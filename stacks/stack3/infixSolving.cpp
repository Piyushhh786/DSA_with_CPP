#include<iostream>
#include<stack>
#include<string>
using namespace std;
int prior(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2;
}
int main(){
    // stack<int>st;
    // stack<char>op;
    // //without brackets

    // string s= "2+6*4/8-3";
    // for(int i =0 ;i<s.size();i++){
    //     if(s[i]>=48 && s[i]<=57){
    //         st.push(s[i]-48);
    //     }
    //     else {
    //         if (op.size()==0 || prior(s[i])>prior(op.top())) op.push(s[i]);
    //         else {
    //             while((op.size()>0 )&& prior(op.top())>=prior(s[i])){
    //                 int val2 = st.top();
    //                 st.pop();
    //                 int val1 = st.top();
    //                 st.pop();
    //                 char ch = op.top();
    //                 op.pop();
    //                 if(ch == '+') st.push(val1+val2);
    //                 else if(ch == '-') st.push(val1-val2);
    //                 else if(ch == '*') st.push(val1*val2);
    //                 else st.push(val1/val2);
    //             }
    //             op.push(s[i]);
    //         }
    //     }

    // }
    // while(!op.empty()){
    //     int val2 = st.top();
    //     st.pop();
    //     int val1 = st.top();
    //     st.pop();
    //     char ch = op.top();
    //     op.pop();
    //     if(ch == '+') st.push(val1+val2);
    //     else if(ch == '-') st.push(val1-val2);
    //     else if(ch == '*') st.push(val1*val2);
    //     else st.push(val1/val2);
    // }
    // cout<<st.top();
    //! with bracket
    stack<int>st;
    stack<char>op;
    //without brackets
//doing after examination....very well
    string s= "(2+6)*4/8-3";
    for(int i =0 ;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57){
            st.push(s[i]-48);
        }
        else {
            if (op.size()==0 ) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if (s[i]==')'){
                while(op.top()!='('){
                    int val2 = st.top();
                    st.pop();
                    int val1 = st.top();
                    st.pop();
                    char ch = op.top();
                    op.pop();
                    if(ch == '+') st.push(val1+val2);
                    else if(ch == '-') st.push(val1-val2);
                    else if(ch == '*') st.push(val1*val2);
                    else st.push(val1/val2);
                }
                op.pop();
            }
            else if( prior(s[i])>prior(op.top())) op.push(s[i]);
            else {
                while((op.size()>0 )&& prior(op.top())>=prior(s[i])){
                    int val2 = st.top();
                    st.pop();
                    int val1 = st.top();
                    st.pop();
                    char ch = op.top();
                    op.pop();
                    if(ch == '+') st.push(val1+val2);
                    else if(ch == '-') st.push(val1-val2);
                    else if(ch == '*') st.push(val1*val2);
                    else st.push(val1/val2);
                }
                op.push(s[i]);
            }
        }

    }
    while(!op.empty()){
        int val2 = st.top();
        st.pop();
        int val1 = st.top();
        st.pop();
        char ch = op.top();
        op.pop();
        if(ch == '+') st.push(val1+val2);
        else if(ch == '-') st.push(val1-val2);
        else if(ch == '*') st.push(val1*val2);
        else st.push(val1/val2);
    }
    cout<<st.top();

}