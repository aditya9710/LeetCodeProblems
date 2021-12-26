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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head;
        if(head == head->next) head = head->next;
        
        ListNode* curr = head;
        
        while (curr && curr->next) {
            if (curr->val == (curr->next)->val) {
                if (curr->next->next) {
                    curr->next = curr->next->next;
                }
                else {
                    curr->next = nullptr;
                }
            }
            else
                curr = curr->next;
        }
        return head;
    }
};83. Remove Duplicates from Sorted List
