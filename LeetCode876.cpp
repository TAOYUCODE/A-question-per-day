class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int n = 0;
        auto p = head, q = head;
        while (p) {
            n++;
            p = p->next;
        }
        for (int i = 0; i < n / 2; i++) q = q->next;
        return q;
    }
};
