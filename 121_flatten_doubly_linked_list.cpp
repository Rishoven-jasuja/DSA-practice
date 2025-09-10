#include <iostream>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;

    Node(int x) {
        val = x;
        prev = NULL;
        next = NULL;
        child = NULL;
    }
};

// Flatten function (converted from LeetCode style)
Node* flatten(Node* head) {
    Node* curr = head;
    if (head == NULL) return head;

    while (curr != NULL) {
        if (curr->child != NULL) {
            // Save next pointer
            Node* next = curr->next;

            // Flatten child and connect
            curr->next = flatten(curr->child);
            curr->next->prev = curr;
            curr->child = NULL;

            // Find the tail of the flattened child list
            while (curr->next != NULL) {
                curr = curr->next;
            }

            // Connect tail with saved next
            if (next != NULL) {
                curr->next = next;
                next->prev = curr;
            }
        }
        curr = curr->next;
    }
    return head;
}

// Utility: print doubly linked list
void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    // Example: creating a multilevel doubly linked list
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;

    // Add child
    head->next->child = new Node(7);
    head->next->child->next = new Node(8);
    head->next->child->next->prev = head->next->child;

    cout << "Original list (with child at node 2)" << endl;
    cout << "Flattened list will be: 1 2 7 8 3" << endl;

    Node* flatHead = flatten(head);

    cout << "After flattening:" << endl;
    printList(flatHead);

    return 0;
}
