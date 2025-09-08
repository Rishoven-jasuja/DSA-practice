#include <bits/stdc++.h>
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *curr1 = list1;
        ListNode *curr2 = list2;

        ListNode *dummy = new ListNode(0);
        ListNode *tail = dummy;

        while (curr1 != nullptr && curr2 != nullptr) {
            if (curr1->val <= curr2->val) {
                tail->next = curr1;
                curr1 = curr1->next;
                tail = tail->next;
            } else {
                tail->next = curr2;
                curr2 = curr2->next;
                tail = tail->next;
            }
        }

        // attach remaining nodes
        while (curr1 != nullptr) {
            tail->next = curr1;
            curr1 = curr1->next;
            tail = tail->next;
        }
        while (curr2 != nullptr) {
            tail->next = curr2;
            curr2 = curr2->next;
            tail = tail->next;
        }

        ListNode *head = dummy->next;
        delete dummy; // free dummy node memory
        return head;
    }
};

// ---------- Helper functions to test ----------
ListNode* createList(vector<int> arr) {
    if (arr.empty()) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curr = head;
    for (int i = 1; i < arr.size(); i++) {
        curr->next = new ListNode(arr[i]);
        curr = curr->next;
    }
    return head;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val;
        if (head->next != nullptr) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Example input
    vector<int> arr1 = {1, 3, 5};
    vector<int> arr2 = {2, 4, 6};

    // create two sorted lists
    ListNode* list1 = createList(arr1);
    ListNode* list2 = createList(arr2);

    // merge lists
    Solution sol;
    ListNode* merged = sol.mergeTwoLists(list1, list2);

    // print result
    cout << "Merged List: ";
    printList(merged);

    return 0;
}
