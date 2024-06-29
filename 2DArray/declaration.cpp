#include<iostream>
using namespace std;
int main(){
   // int arr[2][3]= {{1,3,2},{3,45,6}};//---> do row and three column
    int arr[][3] =  {{1,3,2},{3,45,6}}; //valid
    // this is not valid 
    //int arr[2][] =  {{1,3,2},{3,45,6}};
   // int arr[2][3] = {1,3,2,3,45,6}; //valid
    // column must be declared at the time of initialisation.
    for(int i =0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

//