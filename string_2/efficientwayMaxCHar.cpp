#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s ="piyushhhpalariy";
    int max;
    vector<int>v(26);
    for(int i=0;i<s.length();i++){
        int l =(int)(s[i]);
        int a = l-97;
        v[a]++;
        // if(arr[a]==prr[a])arr[a]++;
        // arr[a]=prr[a];
        
    }
    sort(v.begin(),v.end());

    cout<<v[25];
}