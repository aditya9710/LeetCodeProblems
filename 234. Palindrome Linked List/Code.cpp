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
    
        ListNode* curr = head;
        int cnt = 0;
        while (curr != NULL) {
            cnt++;
            curr = curr->next;
        }
        
        int arr[cnt];
        
        int index = 0;
        curr = head;
        
        while (curr != NULL) {
        arr[index++] = curr->val;
        curr = curr->next;
        }
        
        for (int i = 0; i < cnt; i++)
            cout << arr[i] << " ";
        
        int i = 0;
        
        while(i <= cnt-1){
                if(arr[i] != arr[cnt-1])
                    return false;
                i++;
                cnt--;
        }
        return true;
    }
};