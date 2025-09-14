#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if (head == NULL) {
            return head;
        }

        ListNode* first = head;
        ListNode* last = head;

        // Count total nodes
        int n = 1;
        while (first != NULL) {
            n++;
            first = first->next;
        }

        // Move 'first' to kth node from start
        first = head;
        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        // Move 'last' to kth node from end
        for (int j = 1; j < n - k; j++) {
            last = last->next;
        }

        // Swap values
        int val1 = first->val;
        first->val = last->val;
        last->val = val1;

        return head;
    }
};

// Helper function to print linked list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Example: 1 -> 2 -> 3 -> 4 -> 5, k = 2
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution sol;
    int k = 2;
    head = sol.swapNodes(head, k);

    // Print updated list
    printList(head);

    return 0;
}
