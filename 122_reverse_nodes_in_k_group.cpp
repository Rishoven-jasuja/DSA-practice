#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count = 0;
        ListNode* temp = head;

        // Check if at least k nodes remain
        while (count < k) {
            if (temp == NULL) return head;
            temp = temp->next;
            count++;
        }

        // Recursive call for the rest
        ListNode* prevnode = reverseKGroup(temp, k);

        // Reverse current k nodes
        temp = head;
        count = 0;
        while (count < k) {
            ListNode* next = temp->next;
            temp->next = prevnode;
            prevnode = temp;
            temp = next;
            count++;
        }

        return prevnode;
    }
};

// Helper function to print list
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Driver code
int main() {
    // Create linked list: 1->2->3->4->5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    Solution s;
    int k = 2;

    cout << "Original list: ";
    printList(head);

    head = s.reverseKGroup(head, k);

    cout << "Reversed in groups of " << k << ": ";
    printList(head);

    return 0;
}
