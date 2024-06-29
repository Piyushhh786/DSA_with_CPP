#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s[]={"0123","0023","456","02018","940"};
    int n;
    
    int max=0;
    
    for(int i=0;i<5;i++){
        int x;
        x= stoi(s[i]);
        if(max<x)max=x;
    }
    cout<<max;
    
    
}