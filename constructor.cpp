#include <iostream>

using namespace std;

// Node class for the elements in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// LinkedList class with methods to manipulate the linked list
class LinkedList {
public:
    Node* head;

    // Constructor to initialize the linked list
    LinkedList() {
        this->head = nullptr;
    }

    // Method to append elements to the linked list
    void append(int data) {
        Node* new_node = new Node(data);
        if (!this->head) {
            this->head = new_node;
            return;
        }
        Node* last_node = this->head;
        while (last_node->next) {
            last_node = last_node->next;
        }
        last_node->next = new_node;
    }

    // Method to display the elements of the linked list
    void display() {
        Node* current = this->head;
        while (current) {
            cout << current->data << " ";
            current = current->next;
        }
    }
};

// Example usage of the LinkedList class
int main() {
    // Creating a LinkedList object
    LinkedList ll;
    // Appending elements to the linked list
    ll.append(1);
    ll.append(2);
    ll.append(3);
    // Displaying the elements of the linked list
    ll.display();
    return 0;
}
