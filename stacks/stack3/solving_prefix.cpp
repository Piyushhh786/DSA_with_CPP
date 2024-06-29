//it is easy for computer to solve prefix because its need only single stack
#include<iostream>
#include<string>
#include<stack>
using namespace std;
int solve(int val1, int val2 , char ch){
    if(ch == '-') return val1-val2;
    else if(ch == '+') return val1+val2;
    else if (ch == '/') return val1/val2;
    else return val1*val2;
}
int ans(string pre){
    ///in prefix we travel from the last
    //in postfix we will strt from starting from front and there is one exchange 
    stack<int>st;
    int val1,val2;
    int s = pre.size();
    for(int i = s-1;i>=0;i--){
        if(pre[i]>=48 && pre[i]<=57) st.push(pre[i]-48);
        else{
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            st.push(solve(val1,val2,pre[i]));
        }
    }
    return st.top();
}
int main(){
    string pre = "-++43/*5652";
    cout<<ans(pre);
}