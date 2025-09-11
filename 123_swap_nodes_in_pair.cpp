#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head; // base case

        ListNode* prev = NULL;
        ListNode* first = head;
        head = head->next; // new head after first swap

        while (first != NULL && first->next != NULL) {
            ListNode* second = first->next;
            ListNode* third = second->next;

            // swap
            second->next = first;
            first->next = third;

            // connect with previous part
            if (prev != NULL) {
                prev->next = second;
            }

            // update for next iteration
            prev = first;
            first = third;
        }

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

// Driver code
int main() {
    // Create linked list: 1->2->3->4
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "Original list: ";
    printList(head);

    Solution s;
    head = s.swapPairs(head);

    cout << "After swapping in pairs: ";
    printList(head);

    return 0;
}
