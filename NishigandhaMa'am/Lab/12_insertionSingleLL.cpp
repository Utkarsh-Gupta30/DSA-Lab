#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node (int value){
        data = value;
        next = nullptr;
    }
};

void insertAtBeginning(Node*& head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtMiddle(Node*& head, int position, int value) {
    if (position <1 ){
        cout<<"Position should be >= 1\n";
        return;
    }
    Node* newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i < position && temp != nullptr; i++) {
        temp = temp->next;
    }
    if (temp == nullptr) {
        cout << "Position is out of bound\n";
        delete newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "Null \n";
}

int main() {
    Node* head = nullptr;
    insertAtBeginning(head, 30);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 10);
    cout << "After inserting at beginning: ";
    printList(head);
    insertEnd(head, 40);
    insertEnd(head, 50);
    cout << "After inserting at end: ";
    printList(head);
    insertAtMiddle(head, 2, 25);
    cout << "After inserting at Middle: ";
    printList(head);
    return 0;
}