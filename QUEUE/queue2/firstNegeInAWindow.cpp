#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int arr[]={0,-1,-2,3,4,-5,6,4,7,-8};
    queue<int>q;
    int n = sizeof(arr)/4;
    vector<int>v(arr,arr+n);
    int k = 3;
    vector<int>ans(n-k+1);
    //1.) pushing -ve element in queue
    //2.) do poping until the q's front element is not >= that index..
    //3.) if(q.size()!=0 && q.front()<i+k) ans = nums[q.front]
    //4.) else ans = 0.....
    for(int i =0;i<n;i++) if(v[i]<0)q.push(i);
    int i =0;
    while(i<=n-k){
       while(q.size()>0 && q.front()<i) q.pop();
       if(q.size()==0 || q.front()>=i+k) ans[i]=0;
       else {
        ans[i]=v[q.front()];
       }
        i++;
    }
    for(int j=0;j<=n-k;j++){
        cout<<ans[j]<<" ";
    }

}