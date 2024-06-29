#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
float mx(float a,float b){
    if(a>b) return a;
    else return b;
    
}
float mn(float a,float b){
    if(a<b) return a;
    else return b;
    
}
int main(){
    int arr[]={5,3,8};
    int n=3;
    float kmn=(float)INT_MIN,kmx=(float)INT_MAX;
    for(int i=0;i<n-1;i++){

        if((arr[i]-arr[i+1])>0){
            kmn=mx(kmn,((arr[i]+arr[i+1])/2.0));
        }
        else if(arr[i+1]==arr[i]) continue;
        else {
            kmx=mn(kmx,((arr[i]+arr[i+1])/2.0));
        }
        
    }
    if(kmn-(int)kmn>0) kmn = (int)kmn +  1;
    if(kmx<kmn) cout<<"NO VALUES OF k EXIST";
    else cout<<kmn<<" "<<(int)kmx;
}