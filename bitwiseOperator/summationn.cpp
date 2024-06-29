#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    //this is only valid for four bit system ;;
    int a[]={0,1,0,1,1};
    int b[]={0,0,0,1,1};
    vector<int>c(5);
    vector<int>sum(5);
    int n=5;
    for(int i=n-1;i>=1;i--){
        sum[i]=c[i]+a[i]+b[i];
        if(sum[i]==0) sum[i]=0;
        else if(sum[i]==1) sum[i]=1;
        else if(sum[i]==2){
            sum[i]=0;
            c[i-1]=1;
        }
        else if(sum[i]==3){
            sum[i]=1;
            c[i-1]=1;
        }
    }
    sum[0]=a[0]+b[0]+c[0];
    for(int i=0;i<n;i++) cout<<sum[i];



    
    
    
}