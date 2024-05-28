#include <iostream>

// Node structure for the circular linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to add a new node at the end of the circular list
void append(Node*& head, int val) {
    Node* newNode = new Node(val);

    if (!head) {
        head = newNode;
        newNode->next = head; // Make the node point to itself to form a circular list
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

// Function to display the circular linked list
void display(Node* head) {
    if (!head) {
        std::cout << "List is empty." << std::endl;
        return;
    }

    Node* temp = head;
    do {
        std::cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    std::cout << std::endl;
}

// Function to delete a node by its value from the circular list
void deleteNode(Node*& head, int val) {
    if (!head)
        return;

    Node* current = head;
    Node* prev = nullptr;

    do {
        if (current->data == val) {
            if (current == head) {
                Node* lastNode = head;
                while (lastNode->next != head) {
                    lastNode = lastNode->next;
                }
                head = head->next;
                lastNode->next = head;
            } else {
                prev->next = current->next;
            }

            delete current;
            return;
        }

        prev = current;
        current = current->next;

    } while (current != head);
}

// Function to delete the entire circular linked list
void deleteList(Node*& head) {
    if (!head)
        return;

    Node* current = head;
    Node* nextNode;

    do {
        nextNode = current->next;
        delete current;
        current = nextNode;

    } while (current != head);

    head = nullptr;
}

int main() {
    Node* myList = nullptr;

    append(myList, 1);
    append(myList, 2);
    append(myList, 3);
    append(myList, 4);
    append(myList, 5);

    std::cout << "Circular Linked List: ";
    display(myList);

    deleteNode(myList, 3);

    std::cout << "Linked List after deleting node with value 3: ";
    display(myList);

    deleteList(myList);
    std::cout << "Linked List after deleting all nodes: ";
    display(myList);

    return 0;
}
