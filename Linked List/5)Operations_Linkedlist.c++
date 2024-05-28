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


int main() {
    Node* myList = nullptr;

    append(myList, 1);
    append(myList, 2);
    append(myList, 3);
    append(myList, 4);
    append(myList, 5);

    std::cout << "Original Linked List: ";
    display(myList);

    return 0;
}
