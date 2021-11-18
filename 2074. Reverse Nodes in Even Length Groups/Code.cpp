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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* curr = head;
        
        if(head->next == NULL) return head;
        if(head->next->next == NULL) return head;
        
        int count = 1, check = 0;
        while(curr != NULL) {
            check = count;
            
            ListNode* temp=curr;
            deque<int> dq;
			while(check-- && temp != NULL){
                dq.push_back(temp->val);
                temp = temp->next;
            }
            
            if ((dq.size())%2 == 0) {
                while(!dq.empty()){
                    curr->val = dq.back();
                    curr = curr->next;
                    dq.pop_back();
                }
            }
            else{
                while(!dq.empty()){
                    curr->val = dq.front();
                    curr = curr->next;
                    dq.pop_front();
                }
            }
            count++;
        }
        return head;
    }
};
