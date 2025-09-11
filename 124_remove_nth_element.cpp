#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) return head;

        // Step 1: Count total nodes
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            count++;
        }

        // Step 2: If head needs to be removed
        if (count == n) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }

        // Step 3: Move to (count-n-1)th node
        ListNode* prev = head;
        for (int i = 0; i < count - n - 1; i++) {
            prev = prev->next;
        }

        // Step 4: Delete the target node
        ListNode* torem = prev->next;
        prev->next = torem->next;
        delete torem;

        return head;
    }
};

// Helper function to print the list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    Solution s;
    head = s.removeNthFromEnd(head, 2); // Remove 2nd node from end (which is 4)

    cout << "After Removing 2nd Node from End: ";
    printList(head);

    return 0;
}
