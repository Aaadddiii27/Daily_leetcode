// Problem: 203 - Remove Linked List Elements
// Example: [1,2,6,3,4,5,6], val = 6 -> [1,2,3,4,5]

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* curr = &dummy;

        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        return dummy.next;
    }
};
