#include<iostream>
using namespace std;
class MyCircularQueue {
    int f,b,s,kk;
    vector<int>arr;
public:
    MyCircularQueue(int k) {
        vector<int>v(k);
        arr = v;
        kk = k;
        f=0;
        b=0;
        s=0;
    }
    
    bool enQueue(int value) {
      if(s==kk) return false;
      if(b>=kk) b = b%kk;
      arr[b] = value;
      b++;
      s++;
      return true;
    }
    
    bool deQueue() {
        if(s==0) return false;
        f++;
        if(f>=kk)f=f%kk;//! if f->more than capacity.......
        s--;
        return true;
    }
    
    int Front() {
        if(s==0) return -1;
        return arr[f];
    }
    
    int Rear() {
        if(s==0) return -1;
        if(b==0) return arr[kk-1];//! this is due to when b is 0 then b-1 =-1 invalid....
        return arr[b-1];
    }
    
    bool isEmpty() {
        if(s==0) return true;
        return false;
    }
    
    bool isFull() {
        if(s==kk) return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */