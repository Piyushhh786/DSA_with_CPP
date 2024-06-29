#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int l;
    string a= "abcdeyyxxzyx";
    int n=a.size();
    string str="";
    for(int i=0;i<n;i++){
        if(a[i]>='x'){
            str+=a[i];
        }
    }
    cout<<str<<endl;
    l=str.size();
    for(int i=1;i<l;i++){
        int j=i;
        while(j>=1 && str[j-1]>str[j]){
            swap(str[j],str[j-1]);
            j--;
        }
    }
    cout<<str<<endl;
}