#include<iostream>
#include<queue>
using namespace std;
void display(priority_queue<int> mxH){
    while(mxH.size()>0){
        cout<<mxH.top()<<" ";
        mxH.pop();
    }
    cout<<endl;
}
int main(){
    priority_queue<int>mh;
    // maxHeap mh;
    mh.push(11);
    mh.push(2);
    mh.push(7);
    mh.push(6);
    mh.push(13);
    display(mh);
    mh.push(8);
    mh.pop();
    display(mh);

}