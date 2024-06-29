#include<iostream>
#include<vector>
using namespace std;
int find(vector<int>&parent , int x){
    //x is the no. , we have to find parent of x
    if(parent[x]==x) return parent[x];
    return parent[x] = find(parent , parent[x]);// for compressing the tree
}
void unio(vector<int>&parent , vector<int>&size , int a , int b){
    a = find(parent , a);
    b = find(parent , b);
    if(size[a]<size[b]){
        parent[a] = b;
        size[b]+=size[a];//? u can also use rank system
    }
    else {
        parent[b] = a;
        size[a]+=size[b];//?rank system is almost same
        //? by rank: is just a no.of link included itself.
    }
}
int main(){
    vector<int>par(4);
    vector<int>size(4,1);// do visualization like a graph or tree 
    for(int i = 0 ; i < 4 ; i++){
        par[i] = i;
    }
    unio(par , size , 0 , 1);
    unio(par , size , 2,3);
    unio(par , size , 0 ,3);
    // unio(par , size , 0,4);
    for(int i = 0 ; i< 4; i++ ) cout<<"child:"<<i<<" : parent: "<<par[i]<<endl;


}