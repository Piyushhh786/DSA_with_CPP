#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5,3);//declare the size;
//initial size is 5
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v[0]<<" "<<v[1]<<" "<<v[4];
}