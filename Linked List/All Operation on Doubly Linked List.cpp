#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Function to create a new node with given data
Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    return newNode;
}

// Function to insert a node at the head of the doubly linked list
Node* insertAtHead(Node* head, int data) {
    Node* newNode = createNode(data);
    if (head != nullptr) {
        head->prev = newNode;
    }
    newNode->next = head;
    return newNode;
}

// Function to insert a node at the end of the doubly linked list
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
    newNode->prev = temp;
    return head;
}

// Function to insert a node at a specific position in the doubly linked list
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
    newNode->next = temp;
    newNode->prev = temp->prev;
    temp->prev = newNode;
    if (newNode->prev != nullptr) {
        newNode->prev->next = newNode;
    }
    return (head == temp) ? newNode : head;
}

// Function to delete the head node of the doubly linked list
Node* deleteAtHead(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    Node* newHead = head->next;
    if (newHead != nullptr) {
        newHead->prev = nullptr;
    }
    delete head;
    return newHead;
}

// Function to delete the node at the end of the doubly linked list
Node* deleteAtEnd(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    if (temp->prev != nullptr) {
        temp->prev->next = nullptr;
    }
    delete temp;
    return head;
}

// Function to delete the node at a specific position in the doubly linked list
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
    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    }
    temp->next->prev = temp->prev;
    delete temp;
    return head;
}

// Function to traverse the doubly linked list and print its elements
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to reverse the doubly linked list
Node* reverseList(Node* head) {
    Node* temp = nullptr;
    Node* current = head;
    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    return (temp != nullptr) ? temp->prev : head;
}

// Function to count the number of nodes in the doubly linked list
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

    cout << "Doubly Linked List after inserting at head: ";
    printList(head); // Output: 6 5 4

    head = insertAtEnd(head, 15);
    cout << "Doubly Linked List after inserting at end: ";
    printList(head); // Output: 6 5 4 15

    head = insertAtPosition(head, 10, 1);
    cout << "Doubly Linked List after inserting at position 1: ";
    printList(head); // Output: 6 10 5 4 15

    head = deleteAtHead(head);
    cout << "Doubly Linked List after deleting at head: ";
    printList(head); // Output: 10 5 4 15

    head = deleteAtEnd(head);
    cout << "Doubly Linked List after deleting at end: ";
    printList(head); // Output: 10 5 4

    head = deleteAtPosition(head, 1);
    cout << "Doubly Linked List after deleting at position 1: ";
    printList(head); // Output: 10 4

    head = reverseList(head);
    cout << "Doubly Linked List after reversal: ";
    printList(head); // Output: 4 10

    int count = countNodes(head);
    cout << "Number of nodes: " << count << endl; // Output: Number of nodes: 2

    return 0;
}
