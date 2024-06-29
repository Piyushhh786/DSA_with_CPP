#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int val ;
    Node* left;
    Node* right;
    Node(int val){
        this-> val = val;
        left = NULL;
        right = NULL;
    }
};
void levelOrder_by_queue(Node* root){
    //?first make queue 
    // this is bfs...
    queue<Node*>q;
    //?push root in queue
    q.push(root);
    //? loop q.size>0
    while(q.size()>0){
        Node* temp = q.front();
        cout<<temp->val;
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right) q.push(temp->right);

    }
    //! the only drawback is this we cant separate in level wise ...
    //! it can be done by map data structure will we study in upcoming week...
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);   
    Node* d = new Node(4); 
    Node* e  = new Node(5);
    Node* f = new Node(6); 
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    // Node* b = new Node(2); 
    levelOrder_by_queue(a);

}