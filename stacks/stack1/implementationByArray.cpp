#include<iostream>
using namespace std;
template<typename T>
// making stack without using stlLibrary
class stack{
private: 
    T* arr;
    int s;
public:
//constructor
    stack(){
        s=0;
        arr = new T[0];
    }
    //destructor
    ~stack(){
        delete []arr;
    }
    //push()
    void push(int element){
        arr[s]=element;
        s++;
    }
    void pop(){
        if(s==0){
            cout<<"Error: size is already zero "<<endl;
            return;
        }
        s--;
    }
    int size(){
        return s;
    }
    int top(){
        if(s==0){
            cout<<"Error: size is zero, no element is here to print";
            return-1;
        }
        else return arr[s-1];
    }

};// q3. using recursion in stack
void displayRev(stack<int>&st){
    if(st.size()==0) return ;
    int x=st.top();
    //! cout<<x<<" ";//reverse order me print ho jyga
    st.pop();
    displayRev(st);
    st.push(x);//!wapis se stack ajayga
    cout<<st.top()<<" ";//ordeer wise print honge
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(2);
    st.push(4);
    st.push(5);
    st.pop();
    displayRev(st);
    
}