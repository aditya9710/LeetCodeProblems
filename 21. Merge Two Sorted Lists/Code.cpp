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
    int data;
    Solution* next;
    
    void MoveNode(ListNode** destination, ListNode** source)
    {
        ListNode* newNode = *source;
        assert(newNode != NULL);
        *source = newNode->next;
        newNode->next = *destination;
        *destination = newNode;
    }
 
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode dummy;
        ListNode* tail = &dummy;
        dummy.next = NULL;
        
        while(true){
            if (l1 == NULL){
                tail->next = l2;
                break;
            }
            else if (l2 == NULL){
                tail->next = l1;
                break;
            }
            if (l1->val <= l2->val) {
                MoveNode(&(tail->next), &l1);
            }
            else {
                MoveNode(&(tail->next), &l2);
            }
            tail = tail->next;
        }
        return dummy.next;
    }
};