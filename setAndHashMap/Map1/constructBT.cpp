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
        this->left = NULL;
        this->right = NULL;
    }
};
TreeNode* construct(int arr[],int n){
    queue<TreeNode*>q;
    TreeNode* root = new TreeNode(arr[0]);
    q.push(root);
    int i = 1;
    while(i<n && q.size()>0){
        TreeNode* temp = q.front();
        q.pop();
        if(arr[i]!=-1){
            TreeNode* left = new TreeNode(arr[i]);
            temp->left = left;
            q.push(left);
        }
        i++;
        if( i < n && arr[i]!=-1){
            TreeNode* right = new TreeNode(arr[i]);
            temp->right = right;
            q.push(right);
        }
        i++;
    }
    return root;
}
void PrintNthLevel(TreeNode* root , int level , int count){
    if(root == NULL) return;
    if(count == level) {
        cout<<root->val<<" ";
    }
    PrintNthLevel(root->left , level , count+1);
    PrintNthLevel(root->right , level , count+1);
}
int level(TreeNode* root){
    if(root==NULL) return 0;
    int l = level(root->left);
    int r = level(root->right);
    return 1 + max(l,r);
}
int main(){
    int arr[]= {1,2,6,-1,7,8,-1,9};
    int n = sizeof(arr)/4;
    TreeNode* root = construct(arr,n);
    //level order traversal...using recursion 
    int l = level(root);
    for(int i = 1; i<= l ; i++ ){
        PrintNthLevel(root , i , 1);
    }


}