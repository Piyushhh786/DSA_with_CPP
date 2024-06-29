#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>set;
    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    set.insert(1);
    set.insert(1);
    set.insert(2);
    set.insert(3);
    set.insert(4);
    set.insert(1);
    //? for printing set we use for each loop 
    //becz the element inside the set is unordered way...
    // it does not have any index ...
    cout<<set.size()<<endl;
    set.erase(2);

    for(int ele : set) cout<<ele<<" ";//in cpp compiler it gives in reverse but not necessary
    cout<<endl;

    //?targt exist or not??
    int target = 30;
    if(set.find(target)!=set.end()) cout<<"target exist..."<<endl;
    // if target is not present
    else cout<<"target does not exist..in the set"<<endl;

}