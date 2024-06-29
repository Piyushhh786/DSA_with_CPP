#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
vector<int>mn;
vector<int>mx;
int get(vector<int>&parent ,int x){
    if(parent[x]==x) return x;
    return parent[x] = get(parent , parent[x]);//?isse
    //? fyda yeh hoga ki next time O(1)... me kaam hojyga
}
int s = 0 ;

void unio(vector<int>& parent , vector<int>&size , int a , int b ){
    a = get(parent ,a);
    b = get(parent ,b);
    if(a==b) return;
    else if(size[a]<=size[b]){
        parent[a] = b;
        size[b]+=size[a];
        mn[b] = min(mn[b] , mn[a]);
        mx[b] = max(mx[b] , mx[a]);
        s = size[b];
        
    }
    else {
        parent[b] = a;
        size[a]+= size[b];
        mn[a] = min(mn[a] , mn[b]);
        mx[a] = max(mx[a] , mx[b]);
        s = size[a];
    }
}
void file_i_o(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main(){
    file_i_o();
    int n , m;// n is the size of parent
    cin>>n>>m;
    // n++;
    vector<int>parent(n+1);
    vector<int>size(n+1 , 1);
    for(int i = 0 ; i< n+1 ; i++){
        parent[i]= i;
        mn.push_back(i);
        mx.push_back(i);
    }
    while(m--){
        string  str;
        cin>>str;
        if(str=="union"){
            int a , b;
            cin>>a>>b;
            unio(parent , size ,a , b);
        }
        else if(str =="get"){
            // vector<int>v;//subans
            int a;
            cin>>a;
            a = get(parent , a);
           cout<<mn[a]<<" "<<mx[a]<<" "<<size[a]<<endl;
        }
    }
}