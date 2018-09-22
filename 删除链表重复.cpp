/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        ListNode* a = head;
        if(a->next==NULL||a==NULL) return head;
        while(a->next!=NULL){
            if(a->val==a->next->val)
                a->next = a->next->next;
            else 
                a= a->next;
            //a = a->next;
        }
        return head;
    }
};