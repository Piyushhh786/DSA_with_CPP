#include<iostream>
using namespace std;
template<typename T>
class vector{
private:
    T* arr;
    int s;
public://constructor
    vector(){
        s=0;
        arr = new T[0];
    }
    vector(int nums){
        s=nums;
        arr = new T[s];
        for(int i=0;i<s;i++) arr[i]=0;
    }
    //push_back()
    // void copy_element(){
    //     T* temp= new T[s+1];
    //     for(int i=0;i<s;i++) temp[i]=arr[i];
    //     arr=temp;
    //     arr[s]=0;
    //     delete []temp;
    // }
    void push_back(T element){
        //coppy all the elements
        // copy_element();

        arr[s]=element;
        s++;
    }
    void pop_back(){
        if(s==0){
            cout<<"error "<<endl;
            return ;
        }
        
        s--;
    }
    int size(){
        return s;
    }
    T operator[](int idx){
        if(idx>=s){ 
        cout<<"INDEX OUT OF BOUND!!!!";
        return -1;
        }
        else 
        return arr[idx];
    }


};
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(8);
    v.push_back(2);
    v.push_back(1);
    int n = v.size();
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    cout<<endl;
    v.pop_back();
    n=v.size();
    for(int i=0;i<n;i++) cout<<v[i]<<" ";





}