#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>v,int s){
    for(int i=0;i<s;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(5);
    a.push_back(3);
    display(a,a.size());
    cout<<endl;
    vector<int>b;
    b.push_back(1);
    b.push_back(3);
    b.push_back(7);
    b.push_back(0);
    display(b,b.size());
    cout<<endl;
    int s = a.size()+b.size();
    vector<int>v(s);
    for(int i=0;i<s;i++){
        if(i<=3){
            v[i]=a[i];
        }
        else v[i]=b[i-4];
    }
    display(v,s);
    cout<<endl;
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(v[i]>v[j]){
                int temp;
                temp = v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    display(v,s);


}