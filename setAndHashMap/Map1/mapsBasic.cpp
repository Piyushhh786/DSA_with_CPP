#include<iostream>
#include<unordered_map>
//! maps have 2 types 1.) ordered map 2.) unordered Map
using namespace std;
int main(){
    // unordered_map<int>mp; //! it gives you error,maps always contain key and value
    unordered_map<string,int>m;
    //! always in pair
    // pair<string,int >p;
    // p.first = "Piyush";
    // p.second = 59;
    // cout<<p.first<<" "<<p.second;
    //? how to insert in map
    pair<string,int >p1,p2,p3;
    p1.first = "anushka";
    p1.second = 65;
    p2.first = "Piyush";
    p2.second = 76;
    p3.first = "garmi";
    p3.second = 89;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
     //!using pair is not good method to insert in map

    m["Ayush"] = 77;
    m["krunal"] = 87;
    cout<<endl;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    //? how to display ? 
    for(pair<string,int> p : m){//u can use auto 
        cout<<p.first<<" "<< p.second<<endl;
    }
    for(auto p : m){ // generally use this
         cout<<p.first<<" "<< p.second<<endl;
    }

    //!using pair is not good method to insert in map

    m["Ayush"] = 77;
    m["krunal"] = 87;
    cout<<endl;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    //? how to erase
    m.erase("anushka");
    cout<<endl<<"after erasing :"<<endl;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

}