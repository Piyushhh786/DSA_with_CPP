#include <iostream>

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* NewHead = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return NewHead;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // Your implementation of reverseBetween function
         //firstly we have to break the linked list
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        int count = 1;
        while(count!=left){
            count++;
            temp1 = temp2;
            temp2 = temp2->next;
        }
        temp1->next = NULL;
        ListNode* temp3 = temp2;
        ListNode* temp4 = temp2;
        while(count!= right+1){
            count++;
            temp3 = temp4;
            temp4 = temp4->next;
        }
        temp3->next = NULL;
        temp2 = reverseList(temp2);
        temp1->next = temp2;
        while(temp2->next){
            temp2 = temp2->next;
        }
        temp2->next = temp4;
        return head;
    }

// Function to print the linked list
void printList(ListNode* head) {
    while (head) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    ListNode* Nhead = reverseBetween(head , 2 , 4);
    printList(Nhead);

   
}
