#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void insertBeginning(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertLast(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }

    void insertAtPosition(int position, int data) {
        if (position < 0) {
            cout << "Invalid position" << endl;
            return;
        }
        if (position == 0) {
            insertBeginning(data);
            return;
        }

        Node* newNode = new Node(data);
        Node* current = head;
        int count = 0;

        while (current) {
            if (count == position - 1) {
                newNode->next = current->next;
                if (current->next) {
                    current->next->prev = newNode;
                }
                newNode->prev = current;
                current->next = newNode;
                return;
            }
            current = current->next;
            count++;
        }

        cout << "Invalid position" << endl;
    }

    void deleteBeginning() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }
        if (!head->next) {
            delete head;
            head = nullptr;
        } else {
            Node* temp = head;
            head = head->next;
            head->prev = nullptr;
            delete temp;
        }
    }

    void deleteLast() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }
        if (!head->next) {
            delete head;
            head = nullptr;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->prev->next = nullptr;
            delete current;
        }
    }

    void deleteAtPosition(int position) {
        if (!head || position < 0) {
            cout << "Invalid position" << endl;
            return;
        }
        if (position == 0) {
            deleteBeginning();
            return;
        }

        Node* current = head;
        int count = 0;

        while (current) {
            if (count == position) {
                current->prev->next = current->next;
                if (current->next) {
                    current->next->prev = current->prev;
                }
                delete current;
                return;
            }
            current = current->next;
            count++;
        }

        cout << "Invalid position" << endl;
    }

    void search(int data) {
        Node* current = head;
        while (current) {
            if (current->data == data) {
                cout << "Element found" << endl;
                return;
            }
            current = current->next;
        }
        cout << "Element not found" << endl;
    }

    void display() {
        Node* current = head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    while (true) {
        cout << "\nDoubly Linked List Operations:" << endl;
        cout << "1. Insert in beginning" << endl;
        cout << "2. Insert at last" << endl;
        cout << "3. Insert at any random location" << endl;
        cout << "4. Delete from Beginning" << endl;
        cout << "5. Delete from last" << endl;
        cout << "6. Delete node after specified location" << endl;
        cout << "7. Search for an element" << endl;
        cout << "8. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        int data, position;

        switch (choice) {
            case 1:
                cout << "Enter data to insert atbeginning: ";
                cin >> data;
                dll.insertBeginning(data);
                break;
            case 2:
                cout << "Enter data to insert at last: ";
                cin >> data;
                dll.insertLast(data);
                break;
            case 3:
                cout << "Enter data to insert: ";
                cin >> data;
                cout << "Enter position to insert: ";
                cin >> position;
                dll.insertAtPosition(position, data);
                break;
            case 4:
                dll.deleteBeginning();
                break;
            case 5:
                dll.deleteLast();
                break;
            case 6:
                cout << "Enter position to delete: ";
                cin >> position;
                dll.deleteAtPosition(position);
                break;
            case 7:
                cout << "Enter element to search: ";
                cin >> data;
                dll.search(data);
                break;
            case 8:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }

        cout << "Updated Doubly Linked List: ";
        dll.display();
    }

    return 0;
}
