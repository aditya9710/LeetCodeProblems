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
    bool isPalindrome(ListNode* head) {
    
        if(!head || !head->next) return true;

        ListNode *slow = head, *fast = head, *curr = head, *previous = nullptr;
        
        while(fast && fast->next) {
            curr = slow;
            slow = slow->next;
            fast = fast->next->next;
            curr->next = previous;
            previous = curr;
        }
        
        if (fast) slow = slow->next;
        
         while(previous && previous->val == slow->val) {
             // cout<< slow->val << "\n";
             previous = previous->next;
             slow = slow->next;
         }
        
        return !previous;
    }
};
