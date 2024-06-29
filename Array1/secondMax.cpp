#include<iostream>
#include<climits>
using namespace std;
int main (){
    int n,max,smax = INT_MIN;
    int arr[n];
    cout<<"Enter size  of array : ";
    cin>>n;
    for(int i=0;i<=n-1;i++){
        cout<<"Enter arr "<<i<<" ";
        cin>>arr[i];
        cout<<endl;
    }
    max = arr[0];
    for(int i =1;i<n;i++){
        if(max <=arr[i]) max = arr[i];
    }
   
    for(int i=1;i<=n-1;i++){
        if((smax<=arr[i]) && (smax !=max)){
        smax = arr[i];
        }
    }
    cout<<smax;

}