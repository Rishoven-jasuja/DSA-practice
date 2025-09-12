#include <iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Solution class
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Remove leading nodes with value 'val'
        while(head && head->val == val) {
            head = head->next;
        }

        ListNode* curr = head;
        while(curr && curr->next) {
            if(curr->next->val == val) {
                curr->next = curr->next->next; // Remove node
            } else {
                curr = curr->next;             // Move forward
            }
        }

        return head;
    }
};

// Helper function to print linked list
void printList(ListNode* head) {
    while(head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

// Helper function to create linked list from array
ListNode* createList(int arr[], int n) {
    if(n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for(int i = 1; i < n; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    int arr[] = {1, 2, 6, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    ListNode* head = createList(arr, n);
    
    cout << "Original list: ";
    printList(head);
    
    Solution sol;
    head = sol.removeElements(head, 6);
    
    cout << "After removing 6: ";
    printList(head);
    
    return 0;
}
