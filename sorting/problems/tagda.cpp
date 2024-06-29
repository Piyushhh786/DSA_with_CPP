#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){//by myself
	int a[] ={19,12,23,8,16};
    int count=0;
    int n=5;
    int idx;
    // vector<int>b(5);
    // for(int i=0;i<5;i++){
    //     b[i]=a[i];
    // }
    // sort(b.begin(),b.end());
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++){
    //         if(b[i]==a[j]) {a[j]=i;
    //         break;}

    //     }
    // }
    // for(int i=0;i<5;i++){
    //     cout<<a[i]<<" ";

    // }

    //by sir
    for(int i = 0;i<n;i++){
        int mn=10000;
        {
            for(int j=0;j<n;j++){
                if(a[j]<=0) continue;
                if(mn>a[j]){ mn=a[j];
                idx = j;
                }
            }
            
        }
        a[idx]=count--;
    }
    for(int i=0;i<5;i++){
        cout<<-a[i]<<" ";

    }
}