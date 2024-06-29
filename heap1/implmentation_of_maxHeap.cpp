#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
class maxHeap{
public:
    int s ;
    vector<int>arr;
    maxHeap(){
        s = 0;
        arr.push_back(INT_MAX);
    }
    // size
    int size(){
        return s;
    }
    int top(){
        return arr[1];
    }
    // Push function
    void push(int val){
        arr.push_back(val);
        if(s!=0){
            int i = s+1;
            while(i>1 && arr[i/2]<arr[i]){
                swap(arr[i/2],arr[i]);
                i = i/2;
            }
        }
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"SIZE IS ALREADY EMPTY";
            return;
        }
        arr[1] = arr[s];
        s--;
        //now rearrangement 
        int i = 1;
        while(true){
            int left = 2*i , right = left + 1;
            if(left>s) break;
            if(right>s && left ==s){
                if(arr[i]<arr[left]){
                    swap(arr[i],arr[left]);
                    i = left;
                }
                else break;
            }
            if(arr[left]>arr[right]){
                if(arr[i]<arr[left]){
                    swap(arr[i],arr[left]);
                    i = left;
                }
                else break;
            }
            else {
                if(arr[i]<arr[right]){
                    swap(arr[i],arr[right]);
                    i = right;
                }
                else break;
            }
        }

    }
};
void display(maxHeap mxH){
    while(mxH.size()>0){
        cout<<mxH.top()<<" ";
        mxH.pop();
    }
    cout<<endl;
}
int main(){
    maxHeap mh;
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