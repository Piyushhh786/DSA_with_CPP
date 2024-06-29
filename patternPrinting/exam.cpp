#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"enter c: ";
    cin>>c;
    for(int i=1;i<=5;i++){
            int j =1;
        for(;j<=i;j++){
           
            if(i==1 || i==5) cout<<a;
            if(i==2 || i==4) cout<<b;
            if(i==3) cout<<c;
           
        }
        cout<<endl;
    }

}