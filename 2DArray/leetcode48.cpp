#include<iostream>
using namespace std;
int main(){
    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
     int m = 3;
        for(int i=0;i<m;i++){
            for(int j =0;j<m;j++){
                if(i<j){
                    int temp = matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=temp;
                }
            }
        }
            for(int k=0;k<m;k++){
                for(int i=0,j=m-1;i<j;i++,j--){
                    int temp = matrix[k][i];
                    matrix[k][i]=matrix[k][j];
                    matrix[k][j]=temp;
                }
            }
        
        for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}