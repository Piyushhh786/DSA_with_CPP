#include<iostream>
using namespace std;
class Node{ //* Linked list node
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    Node a(8);
    Node b(7);
    Node c(9);
    Node d(4);
    // form a linnk
    a.next=&b;//! a.next is address storing container
    b.next=&c;
    c.next=&d;
    cout<<a.val<<" "<<((a.next)->next)->val;
    //@ printing all the values in list
    Node Temp=a;
    cout<<endl;
    // while(Temp.next !=NULL){
    //     cout<<Temp.val<<" ";
    //     Temp=*(Temp.next);
    // }
    while(1){ //* jada saaf suthra nahi lag raha hai
        cout<<Temp.val<<" ";
        if(Temp.next == NULL) break;
        Temp=*(Temp.next);       
    }
}