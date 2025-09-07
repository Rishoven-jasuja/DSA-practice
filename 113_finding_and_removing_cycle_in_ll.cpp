#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode *slow = head, *fast = head;

        // check if cycle exists
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }
        if (!fast || !fast->next) return NULL; // no cycle

        // find start of cycle
        slow = head;
        ListNode *prev = NULL; // to help remove cycle if needed
        while (slow != fast) {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL; // remove cycle
        return slow;
    }
};

int main() {
    // create list: 1->2->3->4->5 and cycle at node 3
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = head->next->next; // cycle at 3

    Solution s;
    ListNode* start = s.detectCycle(head);

    if (start) cout << "Cycle starts at: " << start->val << endl;
    else cout << "No cycle" << endl;

    return 0;
}
