#include<iostream>
#include<deque>
#include<string>
using namespace std;
int main(){
    string s = "abccba";
    deque<char>deq;
    int i =0;
    bool flag  =true;
    for(i =0 ;i<s.size();i++){
        deq.push_front(s[i]);
    }
   while(deq.size()!=0){
    if(deq.front()==deq.back()){
        deq.pop_front();
        deq.pop_back();
    }
    else {
        flag = false;
        break;
    }
   }
   cout<<flag;
   


}