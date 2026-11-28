// Problem: 61 - Rotate List
// Example: [1,2,3,4,5], k = 2 -> [4,5,1,2,3]

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr || k == 0) {
            return head;
        }

        int len = 1;
        ListNode* tail = head;

        while (tail->next != nullptr) {
            tail = tail->next;
            len++;
        }

        k = k % len;

        if (k == 0) {
            return head;
        }

        tail->next = head;

        int steps = len - k;
        ListNode* newTail = head;

        for (int i = 1; i < steps; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};
