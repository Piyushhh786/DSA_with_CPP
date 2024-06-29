#include<iostream>
#include<queue>
#include<vector>
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
TreeNode* constructTree(vector<int>&v){
    queue<TreeNode*>q;
    int n = v.size();
    TreeNode* root = new TreeNode(v[0]);
    q.push(root);
    int i =1;
    while(i+1<n && q.size()>0){
        TreeNode* temp = q.front();
        q.pop();
        TreeNode* l = new TreeNode(v[i]);
        if(v[i]==-1) l = NULL;
        TreeNode* r = new TreeNode(v[i+1]);
        if(v[i+1]==-1) r = NULL;
        temp->left =  l;
        temp->right = r;
        if(l)q.push(l);
        if(r)q.push(r);
        i+=2;
    }
    return root;
}
int sum_power_of2(int x , int sum,int count,int two){
    if(count == x) return sum-1;
    return sum_power_of2(x,sum+ two,count+1,two*2);//initial(3,1,0,1)->(3,2,1,2)->(3,4,2,4)
}
void leftBoundary(TreeNode* root){
    //! iterative way....
    // TreeNode* temp = root;
    // while(temp->left || temp->right){
    //     cout<<temp->val<<" ";
    //     if(temp->left) temp = temp->left;
    //     else if (temp->right) temp = temp->right;
    //     else break;
    // }
    //! recursive way....
    if(root==  NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}
int main(){
    int l,n;
    cout<<"Enter Number of Level: ";
    cin>>l;
    n = sum_power_of2(l,1,0,1);
    vector<int>v(n,-1);
    for(int i = 0 ; i<12;i++){
        cin>>v[i];
    }
    TreeNode* root = constructTree(v);
    


}