#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
// heap visualization easily can be done in tree
//but implementation should be in array... which is quite good and efficient..
class minHeap{
public:
    int s;
    vector<int>v;
    minHeap(){
        s = 0;
        v.push_back(INT_MIN);
    }
    //push...
    void push(int val){
        if(s==0)v.push_back(val);
        else {
            v.push_back(val);
            int i = s+1;
            while(i/2!=0 && v[i/2]>v[i]){
                swap(v[i],v[i/2]);
                i = i/2;
            }
        }
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Error: empty heap";
            return;
        }
        else{
            v[1] = v[s];
            s--;
            int i = 1;
            while(true){
                int left = 2*i , right = left+1;
                if(left>s) break;
                if(right>s){
                    if(left<=s && v[i]>v[left]){
                        swap(v[i],v[left]);
                        i = left;
                    }
                    else break;
                }
                if(v[left]<v[right]){
                    if(v[i]>v[left]){
                        swap(v[i],v[left]);
                        i = left;
                    }
                    else break;
                }
                else {
                    if(v[i]>v[right]){
                        swap(v[i],v[right]);
                        i = right;
                    }
                    else break;
                }
                s--;
            }
        }
    }
    int top(){
        if(s==0) return INT_MAX;
        else return v[1];
    }

};
int main(){
    minHeap mh;
    mh.push(6);
    mh.push(9);
    mh.push(1);
    mh.push(5);
    mh.push(4);
   cout<<mh.top()<<endl;
   mh.pop();
   mh.pop();
   cout<<mh.top();

}