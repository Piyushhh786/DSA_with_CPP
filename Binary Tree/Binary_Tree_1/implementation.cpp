#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right= NULL;
    }
};
void displayByInOrder(Node* root){
    //base condition
    if(root == NULL) return;
    displayByInOrder(root->left);
    cout<<root->val<<" ";
    displayByInOrder(root->right);
}
int size(Node* root){
    //base condition
    if(root == NULL) return 0;
    int leftSize = size(root->left);
    int rightSize = size(root->right);
    return 1+leftSize + rightSize;
}
int sum(Node* root){
    if(root == NULL) return 0;
    int leftSum = sum(root->left);
    int rightSum = sum(root->right);
    return root->val + leftSum + rightSum;
}
int Maximum(Node* root){
    if(root == NULL) return INT_MIN;
    int LeftMax = Maximum(root->left);
    int RightMax = Maximum(root->right);
    int Max = max(LeftMax,RightMax);
    return max(Max,root->val);
}
int MinInTree(Node* root){
    if(root == NULL) return INT_MAX;
    int lMin = MinInTree(root->left);
    int rMin = MinInTree(root->right);
    return min(root->val,min(lMin,rMin));
}
int Product(Node* root){
    if(root == NULL) return 1;
    int lProduct = Product(root->left);
    int rProduct = Product(root->right);
    return root->val*lProduct*rProduct;
}
int level(Node* root){
    if(root == NULL) return 0;
    return 1+max(level(root->left),level(root->right));

}
int main(){ 
    //low quality binary tree
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(57);
    Node* d = new Node(49);
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    c->left = new Node(8);
    c->right = new Node(6);
    // display all node in tree;; it can be done by recursion
    displayByPreOrder(root);
    cout<<endl;
    cout<<size(root)<<endl;
    cout<<sum(root)<<endl<<Maximum(root)<<endl<<MinInTree(root);
    cout<<endl<<"product of tree: "<<Product(root)<<endl;
    cout<<"level of tree: "<<level(root)<<endl;
}