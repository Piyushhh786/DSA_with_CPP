#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val = val;
        left = NULL;
        right = NULL;
    }
}
void Tree(vector<int>v){
    
}
void leftBoundary(TreeNode* root){
    if(root->left==NULL && root->right==NULL){
        return;
    }
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(!root->left) leftBoundary(root->right);
    
}
int main(){

}