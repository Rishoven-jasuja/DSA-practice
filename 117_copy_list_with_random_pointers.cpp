#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;

        Node* newhead = new Node(head->val);
        Node* oldtemp = head->next;
        Node* newtemp = newhead;
        unordered_map<Node*, Node*> m;

        // Step 1: Copy nodes (next pointers)
        m[head] = newhead;
        while (oldtemp != NULL) {
            Node* copynode = new Node(oldtemp->val);
            m[oldtemp] = copynode;
            newtemp->next = copynode;
            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
        }

        // Step 2: Copy random pointers
        oldtemp = head;
        newtemp = newhead;
        while (oldtemp != NULL) {
            if (oldtemp->random != NULL) {
                newtemp->random = m[oldtemp->random];
            } else {
                newtemp->random = NULL;
            }
            oldtemp = oldtemp->next;
            newtemp = newtemp->next;
        }

        return newhead;
    }
};

// Helper function to print list (for testing in VS Code)
void printList(Node* head) {
    while (head != NULL) {
        cout << "Val: " << head->val;
        if (head->random != NULL)
            cout << ", Random: " << head->random->val;
        else
            cout << ", Random: NULL";
        cout << endl;
        head = head->next;
    }
}

int main() {
    // Build a sample linked list
    // 1 -> 2 -> 3, with random pointers
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);

    n1->next = n2;
    n2->next = n3;

    n1->random = n3; // 1's random -> 3
    n2->random = n1; // 2's random -> 1
    n3->random = NULL; // 3's random -> NULL

    cout << "Original List:" << endl;
    printList(n1);

    Solution sol;
    Node* copied = sol.copyRandomList(n1);

    cout << "\nCopied List:" << endl;
    printList(copied);

    return 0;
}
