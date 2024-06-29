#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(7);
    v.push_back(5);

   for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";

   }
   cout<<endl;

   sort(v.begin(),v.end());
   //if u want to sort these vectors.
   //use sort(v.begin(),v.end())

    for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
   }

}