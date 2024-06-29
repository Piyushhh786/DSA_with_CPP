#include<iostream>
using namespace std;
int main(){//aukaat ke bahar hai  apne
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int curr;
        for(int j=0;j<=i;j++){
            if(j==(i)||j==0){
                curr=1;
            }
            else curr=((float)(i-j))*(float)(curr)/((float)(j+1));
            cout<<curr;
        }
        cout<<endl;
    }
}//error : concept week