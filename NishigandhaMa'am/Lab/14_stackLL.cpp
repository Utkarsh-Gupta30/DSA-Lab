#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void listout(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "Null \n";
}

void push(Node*& head) {
    int value;
    cout << "Enter a number to push: ";
    cin >> value;

    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    listout(head);
}

void pop(Node*& head) {
    if (head == nullptr) {
        cout << "Stack is empty, nothing to pop.\n";
        return;
    }

    Node* temp = head;

    if (temp->next == nullptr) { 
        cout << "Popped value: " << temp->data << endl;
        delete temp;
        head = nullptr;
    } else {
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        cout << "Popped value: " << temp->next->data << endl;
        delete temp->next;
        temp->next = nullptr;
    }
    listout(head);
}

int main()
{
    Node* head = nullptr;
    int option;
    while (true)
    {
        cout<<"\vPush : 1 \nPop : 2\nExit : 0\n";
        cin>>option;
        if(option == 1)
        {
            push(head);
        }
        else if(option == 2)
        {
            pop(head);
        }
        else
        {
            break;
        }
    }
    return 0;
}