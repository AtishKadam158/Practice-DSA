#include <bits/stdc++.h>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
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
    }
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head;
    while (temp) {
        std::cout << temp->data << " ";
        temp = temp->next;
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
        delete temp;
        return;
    }

    Node* prev = head;
    Node* current = head->next;
    while (current) {
        if (current->data == val) {
            prev->next = current->next;
            delete current;
            return;
        }
        prev = current;
        current = current->next;
    }
}

// Function to delete the entire linked list
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

    std::cout << "Original Linked List: ";
    display(myList);

    deleteNode(myList, 3);

    std::cout << "Linked List after deleting node with value 3: ";
    display(myList);

    deleteList(myList);
    std::cout << "Linked List after deleting all nodes: ";
    display(myList);

    return 0;
}
