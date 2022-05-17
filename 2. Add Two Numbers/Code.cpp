/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode();
        ListNode* curr = head;
        int v1, v2, carry = 0, val;
        while (l1 || l2 || carry) {
            v1 = l1? l1->val: 0;
            v2 = l2? l2->val: 0;
            val = v1 + v2 + carry;
            carry = val/10;
            val = val % 10;
            ListNode* temp = new ListNode(val);
            curr->next = temp;
            
            curr = curr->next;
            
            l1 = l1? l1->next: nullptr;
            l2 = l2? l2->next: nullptr;
        }
        return head->next;
    }
};
