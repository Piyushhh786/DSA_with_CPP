#include<iostream>
#include<queue>
using namespace std;
class TreeNode{
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    } 
};
class Tree{
    public:
    TreeNode* root;
    int s;
    Tree(){
        root = NULL;
        s = 0;
    }
    // void insertNode(int val){
    //     TreeNode* temp = new Node(val);
    //     if(s==0) root = temp;
    //     else{

    //     }
    // }
};
void display(TreeNode* root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    queue<TreeNode*>q;
    TreeNode* temp ;
    int x;
    vector<int>v(8);
    TreeNode* root;
    for(int i =0 ;i<8 ; i++){
        cin>>v[i];
    } 
    int n = v.size();
    root = new TreeNode(v[0]);
    q.push(root);
    int  i =1;
    //? que is like {1,}->{2,3}->{3,4,5}.....
    while(i+1<n && q.size()>0){
        TreeNode* temp = q.front();
        q.pop();
        TreeNode* l = new TreeNode(v[i]);
        if(v[i] == -1) l = NULL; 
        TreeNode* r = new TreeNode(v[1+i]);
        if(v[i+1]==-1) r = NULL;
        temp->left = l;
        temp->right = r;
        if(l!=NULL){
        q.push(l);
        }
        if(r!=NULL) q.push(r);
        i+=2;
    }
    display(root); 

}