#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Function to create a new node with given data
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a node at the head of the linked list
Node* insertAtHead(Node* head, int data) {
    Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

// Function to insert a node at the end of the linked list
Node* insertAtEnd(Node* head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        return newNode;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Function to insert a node at a specific position in the linked list
Node* insertAtPosition(Node* head, int data, int position) {
    if (position <= 0) {
        return insertAtHead(head, data);
    }
    Node* newNode = createNode(data);
    Node* temp = head;
    int currentPosition = 1;
    while (temp != nullptr && currentPosition < position) {
        temp = temp->next;
        currentPosition++;
    }
    if (temp == nullptr) {
        return insertAtEnd(head, data);
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// Function to delete the head node of the linked list
Node* deleteAtHead(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    Node* newHead = head->next;
    delete head;
    return newHead;
}

// Function to delete the node at the end of the linked list
Node* deleteAtEnd(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

// Function to delete the node at a specific position in the linked list
Node* deleteAtPosition(Node* head, int position) {
    if (head == nullptr || position < 0) {
        return head;
    }
    if (position == 0) {
        return deleteAtHead(head);
    }
    Node* temp = head;
    int currentPosition = 1;
    while (temp->next != nullptr && currentPosition < position) {
        temp = temp->next;
        currentPosition++;
    }
    if (temp->next == nullptr) {
        return head;
    }
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
    return head;
}

// Function to traverse the linked list and print its elements
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to reverse the linked list
Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

// Function to count the number of nodes in the linked list
int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    Node* head = nullptr;

    head = insertAtHead(head, 4);
    head = insertAtHead(head, 5);
    head = insertAtHead(head, 6);

    cout << "Singly Linked List after inserting at head: ";
    printList(head); // Output: 6 5 4

    head = insertAtEnd(head, 15);
    cout << "Singly Linked List after inserting at end: ";
    printList(head); // Output: 6 5 4 15

    head = insertAtPosition(head, 10, 1);
    cout << "Singly Linked List after inserting at position 1: ";
    printList(head); // Output: 6 10 5 4 15

    head = deleteAtHead(head);
    cout << "Singly Linked List after deleting at head: ";
    printList(head); // Output: 10 5 4 15

    head = deleteAtEnd(head);
    cout << "Singly Linked List after deleting at end: ";
    printList(head); // Output: 10 5 4

    head = deleteAtPosition(head, 1);
    cout << "Singly Linked List after deleting at position 1: ";
    printList(head); // Output: 10 4

    head = reverseList(head);
    cout << "Singly Linked List after reversal: ";
    printList(head); // Output: 4 10

    int count = countNodes(head);
    cout << "Number of nodes: " << count << endl; // Output: Number of nodes: 2

    return 0;
}
