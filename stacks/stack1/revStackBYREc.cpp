#include<iostream>
#include<stack>
using namespace std;
void revStack(stack<int>&st,stack<int>&temp){
    int x;
    if(st.size()==0 ){
        x= temp.top();
        temp.pop();

        return;
    }

}
void displayRev(stack<int>&st){
    if(st.size()==0) return ;
    int x=st.top();
    //! cout<<x<<" ";//reverse order me print ho jyga
    st.pop();
    displayRev(st);
    st.push(x);//!wapis se stack ajayga
    cout<<st.top();//ordeer wise print honge
}
int main(){
    stack<int>temp;
    stack<int>st;
    //temp
    st.push(10);
    st.push(2);
    st.push(4);
    st.push(5);

}