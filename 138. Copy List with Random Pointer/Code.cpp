/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) return head;
        
        Node* temp = head;
        
        while(temp != nullptr) {
            Node* next = temp->next;
            Node* random = temp->random;
            temp->next = new Node(temp->val, next, random);
            temp = temp->next->next;
        }
        
        Node* newHead = head->next;
        temp = head;
        
        while(temp != nullptr){
            Node* next = temp->next;
            if (next->random != nullptr) next->random = next->random->next;
            temp = next->next; 
        }

        temp = head;
        
        while(temp != nullptr) {
            Node* copy = temp->next;
            temp->next = copy->next;
            if (copy->next != nullptr) copy->next = temp->next->next;
            temp = temp->next;
        }
        
        return newHead;
    }
};
