#include<iostream>
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
//? dfs method to travel in tree..... it is  level dfs traversal
void printNthLevle(TreeNode* root,int level,int counter){
    if(root==NULL) return;
    counter++;
    if(counter == level){
        cout<<root->val<<" ";
        return;
    }
    printNthLevle(root->left,level,counter);
    printNthLevle(root->right,level,counter);

}
int level(TreeNode* root ){
    if(root == NULL) return 0;
    return 1 + max(level(root->left),level(root->right));
}
void leftBoundary(TreeNode* root){
    TreeNode* temp = root;
    while(temp->left || temp->right){
        cout<<temp->val<<" ";
        if(temp->left) temp = temp->left;
        else if (temp->right) temp = temp->right;
        else break;
    }
}
void rightBoundary(TreeNode* root){
    TreeNode* temp = root;
    while(temp->left || temp->right){
        if(temp->right) {
            temp = temp->right;
            cout<<temp->val<<" ";
        }
        else if(temp->left){
            temp = temp->left;
            cout<<temp->val<<" ";
        }
        else break;
    }
}
void leafNode(TreeNode* root){
    if(root == NULL) return;
    leafNode(root->left);
    if(root->left==NULL && root->right == NULL) cout<<root->val;
    leafNode(root->right);
}
int main(){
    TreeNode* a = new TreeNode(3);
    TreeNode* b= new TreeNode(4);
    TreeNode* c= new TreeNode(5);
    TreeNode* d= new TreeNode(6);
    TreeNode* e= new TreeNode(7);
    TreeNode* f = new TreeNode(8);
    a->left = b;
    a->right = c;
    b->left = d;
    d->left = e;
    b->right = f;
    c->right = f;
    cout<<level(a);
    printNthLevle(a,3,0);
    // leftBoundary(a);
    // rightBoundary(a);
    // cout<<endl;
    // leafNode(a);

}