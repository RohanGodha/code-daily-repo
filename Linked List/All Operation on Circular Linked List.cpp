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
    newNode->next = newNode; // For circular linked list, the next of a new node points to itself
    return newNode;
}

// Function to insert a node at the head of the circular linked list
Node* insertAtHead(Node* head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        newNode->next = newNode; // For the first node, the next points to itself
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
    return newNode;
}

// Function to insert a node at the end of the circular linked list
Node* insertAtEnd(Node* head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        newNode->next = newNode;
        return newNode;
    }
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    return head;
}

// Function to insert a node at a specific position in the circular linked list
Node* insertAtPosition(Node* head, int data, int position) {
    if (position <= 0) {
        return insertAtHead(head, data);
    }
    Node* newNode = createNode(data);
    Node* temp = head;
    int currentPosition = 1;
    while (temp->next != head && currentPosition < position) {
        temp = temp->next;
        currentPosition++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return (head == temp) ? newNode : head;
}

// Function to delete the head node of the circular linked list
Node* deleteAtHead(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    if (head->next == head) { // Only one node in the list
        delete head;
        return nullptr;
    }
    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = head->next;
    delete head;
    return temp->next;
}

// Function to delete the node at the end of the circular linked list
Node* deleteAtEnd(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    if (head->next == head) { // Only one node in the list
        delete head;
        return nullptr;
    }
    Node* temp = head;
    Node* prev = nullptr;
    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = head;
    delete temp;
    return head;
}

// Function to delete the node at a specific position in the circular linked list
Node* deleteAtPosition(Node* head, int position) {
    if (head == nullptr || position < 0) {
        return head;
    }
    if (position == 0) {
        return deleteAtHead(head);
    }
    Node* temp = head;
    Node* prev = nullptr;
    int currentPosition = 0;
    while (temp->next != head && currentPosition < position) {
        prev = temp;
        temp = temp->next;
        currentPosition++;
    }
    if (temp->next == head) { // Node not found
        return head;
    }
    prev->next = temp->next;
    delete temp;
    return head;
}

// Function to traverse the circular linked list and print its elements
void printList(Node* head) {
    if (head == nullptr) {
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

// Function to reverse the circular linked list
Node* reverseList(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    Node* current = head;
    Node* nextNode = nullptr;
    Node* prevNode = nullptr;
    do {
        nextNode = current->next;
        current->next = prevNode;
        prevNode = current;
        current = nextNode;
    } while (current != head);
    head->next = prevNode;
    return prevNode;
}

// Function to count the number of nodes in the circular linked list
int countNodes(Node* head) {
    if (head == nullptr) {
        return 0;
    }
    Node* temp = head;
    int count = 0;
    do {
        count++;
        temp = temp->next;
    } while (temp != head);
    return count;
}

// Function to detect if there is a cycle in the circular linked list
bool hasCycle(Node* head) {
    if (head == nullptr) {
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true;
        }
    }
    return false;
}

// Function to count the number of cycles in the circular linked list
int countCycles(Node* head) {
    int count = 0;
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            count++;
            while (fast != head) {
                fast = fast->next;
                count++;
            }
            break;
        }
    }
    return count;
}

int main() {
    Node* head = nullptr;

    head = insertAtHead(head, 4);
    head = insertAtHead(head, 5);
    head = insertAtHead(head, 6);

    cout << "Circular Linked List after inserting at head: ";
    printList(head); // Output: 6 5 4

    head = insertAtEnd(head, 15);
    cout << "Circular Linked List after inserting at end: ";
    printList(head); // Output: 6 5 4 15

    head = insertAtPosition(head, 10, 1);
    cout << "Circular Linked List after inserting at position 1: ";
    printList(head); // Output: 6 10 5 4 15

    head = deleteAtHead(head);
    cout << "Circular Linked List after deleting at head: ";
    printList(head); // Output: 10 5 4 15

    head = deleteAtEnd(head);
    cout << "Circular Linked List after deleting at end: ";
    printList(head); // Output: 10 5 4

    head = deleteAtPosition(head, 1);
    cout << "Circular Linked List after deleting at position 1: ";
    printList(head); // Output: 10 4

    head = reverseList(head);
    cout << "Circular Linked List after reversal: ";
    printList(head); // Output: 4 10

    int count = countNodes(head);
    cout << "Number of nodes: " << count << endl; // Output: Number of nodes: 2

    if (hasCycle(head)) {
        cout << "The Circular Linked List has a cycle." << endl;
        int cycles = countCycles(head);
        cout << "Number of cycles: " << cycles << endl;
    } else {
        cout << "The Circular Linked List does not have a cycle." << endl;
    }

    return 0;
}
