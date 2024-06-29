#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
    int heights[]={2,1,5,6,2,3};
    int n = 6;
        vector<int>prevArea(n),nextArea(n);
        stack<int>st;
        st.push(n-1);
        nextArea[n-1]=1;
     for(int i=n-2;i>=0;i--){
            while(st.size()>0 && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.size()==0)nextArea[i]=1;
            else nextArea[i]=n-st.top();
            st.push(i);
        }
        for(int i=0;i<n;i++){
            cout<<nextArea[i]<<" ";
        }
}
