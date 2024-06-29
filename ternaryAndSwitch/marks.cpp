#include<iostream>
using namespace std;
int main(){
   int x;
   cout<<"enter your marks out of hundred : ";
   cin>>x;
//    if(x>0 && x<101){
//     if(x>33){
//         cout<<"Pass";
//     }
//     else{
//         cout<<"Fail";
//     }
//    }
//    else{
//     cout<<"not matching the condition";
//    }
x>33 ? cout<<"Pass" : cout<<"Fail";

}