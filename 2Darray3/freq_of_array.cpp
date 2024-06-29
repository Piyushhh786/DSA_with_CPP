#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[] = {1,3,5,2,5,16,1,5,2};
    int n = sizeof(arr)/4;
    for(int i = 0 ;i < n ; i++ ){
       int count = 1;
        for(int j = i+1 ; j< n ; j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=INT_MAX;//CHECK MARK: IT IS INCLUDED...
            }
        }
       if(arr[i]!=INT_MAX) cout<<arr[i]<<": "<<count<<endl;
    }
}