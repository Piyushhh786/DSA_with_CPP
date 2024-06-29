#include<iostream>
#include<unordered_map>
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
int main(){
    //u have a tree let start
    TreeNode* root = new TreeNode(3);
    TreeNode* b = new TreeNode(4);
    TreeNode* c = new TreeNode(5);
    TreeNode* d = new TreeNode(6);
    TreeNode* e = new TreeNode(7);
    TreeNode* f = new TreeNode(8);
    root->left = b;
    root->right = c;
    b->left = d;
    d->left = e;
    b->right = f;
    c->right = f;
    queue<pair<TreeNode*,int>>q;
    pair<TreeNode*,int>p,s;
    unordered_map<int,int>m;// level , root->val
    //? using bfs level order traversal
    p.first = root;
    p.second = 0;
    q.push(p);
    TreeNode* leftNode;
    TreeNode* rightNode;
    int count = 0;
    while(q.size()>0){
        p = q.front();
        TreeNode* temp = p.first;
        // count = p.second;//! unwanted...
        //kaam
        if(m.find(p.second)==m.end()){
            m[p.second]=temp->val;
        }
        q.pop();
        
        if(temp->left){
            count = p.second;
            count--;
            leftNode = temp->left;
            s.first = leftNode;
            s.second = count;
            q.push(s);
        }
        if(temp->right){
            count = p.second;
            count++;
            rightNode = temp->right;
            s.first = rightNode;
            s.second = count;
            q.push(s);
        }
    }
    for(auto x : m){
        cout<<x.second<<" "<<x.first<<endl;
    }

}

// #include<iostream>
// // #include<unordered_map>
// #include<unordered_set>
// using namespace std;
// void topView(TreeNode* root , int count , unordered_set<int>&s,vector<int>&v){
//     if(root == NULL) return;
//     //kaam
//     if(s.find(count)==s.end()){
//         s.insert(count);
//         v.push_back(root->val);
//     }
//     topView(root->left,count-1,s,v);
//     topView(root->right,count+1,s,v);
// }
// int main(TreeNode* root){
//     // unordered_map<int,int>m;
//     unordered_set<int>s;
//     vector<int>v;
//     topView(root,0,s,v);

// }
//! well try but in this approach we miss lots of right side elements....
