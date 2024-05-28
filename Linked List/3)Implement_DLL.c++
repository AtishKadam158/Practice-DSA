#include<bits/stdc++.h>
using namespace std;

// Node structure for the doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

// Function to add a new node at the end of the list
void append(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

// Function to display the doubly linked list in forward direction
void displayForward(Node* head) {
    Node* temp = head;
    while (temp) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

// Function to display the doubly linked list in reverse direction
void displayBackward(Node* head) {
    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    while (temp) {
        std::cout << temp->data << " ";
        temp = temp->prev;
    }
    std::cout << std::endl;
}

// Function to delete a node by its value
void deleteNode(Node*& head, int val) {
    if (!head)
        return;

    if (head->data == val) {
        Node* temp = head;
        head = head->next;
        if (head)
            head->prev = nullptr;
        delete temp;
        return;
    }

    Node* current = head;
    while (current) {
        if (current->data == val) {
            Node* prevNode = current->prev;
            Node* nextNode = current->next;

            if (prevNode)
                prevNode->next = nextNode;
            if (nextNode)
                nextNode->prev = prevNode;

            delete current;
            return;
        }
        current = current->next;
    }
}

// Function to delete the entire doubly linked list
void deleteList(Node*& head) {
    Node* current = head;
    while (current) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
    head = nullptr;
}

int main() {
    Node* myList = nullptr;

    append(myList, 1);
    append(myList, 2);
    append(myList, 3);
    append(myList, 4);
    append(myList, 5);

    cout << "Doubly Linked List in Forward Direction: ";
    displayForward(myList);

    cout << "Doubly Linked List in Reverse Direction: ";
    displayBackward(myList);

    deleteNode(myList, 3);

    cout << "Linked List after deleting node with value 3: ";
    displayForward(myList);

    deleteList(myList);
    cout << "Linked List after deleting all nodes: ";
    displayForward(myList);

    return 0;
}
