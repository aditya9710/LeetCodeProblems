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
    ListNode* reverseList(ListNode* head) {
        // a->b->c->d->Null
        // d->c->b->a->Null
        
        if (!head || !head->next) return head;
        
        ListNode* curr = head, *previous = nullptr,* temp = head;
        
        // int i = 0;
        while (curr != NULL) {
            // cout<<i<<"\n";
            // i += 1;
            // b | c
            temp = temp->next;
            // Null | a
            curr->next = previous;
            // a | b
            previous = curr;
            // b | c
            curr = temp;
            
        }
        return previous;
    }
};
