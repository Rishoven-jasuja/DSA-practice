// #include <iostream>
// using namespace std;

// // Definition for singly-linked list.
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
// };

// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode *temp = head;
//         int idx = 0;

//         // Step 1: Count nodes
//         while (temp != NULL) {
//             idx++;
//             temp = temp->next;
//         }

//         // Step 2: Middle index
//         idx = idx / 2;

//         // Step 3: Move to middle
//         int curr = 0;
//         temp = head;
//         while (curr < idx && temp != NULL) {
//             temp = temp->next;
//             curr++;
//         }
//         return temp;
//     }
// };

// // Helper function to print a linked list from a given node
// void printList(ListNode* head) {
//     while (head != NULL) {
//         cout << head->val << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// // Helper function to create a linked list from an array
// ListNode* createList(int arr[], int n) {
//     if (n == 0) return nullptr;

//     ListNode* head = new ListNode(arr[0]);
//     ListNode* curr = head;
//     for (int i = 1; i < n; i++) {
//         curr->next = new ListNode(arr[i]);
//         curr = curr->next;
//     }
//     return head;
// }

// int main() {
//     Solution sol;

//     // Example: create list [1,2,3,4,5]
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     ListNode* head = createList(arr, n);

//     cout << "Original List: ";
//     printList(head);

//     // Find middle node
//     ListNode* middle = sol.middleNode(head);

//     cout << "Middle Node onwards: ";
//     printList(middle);

//     return 0;
// }

#include <iostream>
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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;

        // fast moves 2 steps, slow moves 1 step
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;  // slow is now at the middle
    }
};

// Helper function to create a linked list from an array
ListNode* createList(int arr[], int n) {
    if (n == 0) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < n; i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

// Helper function to print a linked list from a given node
void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Solution sol;

    // Example: create list [1,2,3,4,5,6]
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    ListNode* head = createList(arr, n);

    cout << "Original List: ";
    printList(head);

    // Find middle node
    ListNode* middle = sol.middleNode(head);

    cout << "Middle Node onwards: ";
    printList(middle);

    return 0;
}
