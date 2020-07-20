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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return NULL;
        ListNode* curr=head;
        while(curr){
            if(curr->next && curr->next->val==val) curr->next=curr->next->next;
            else curr=curr->next;
        }
        
        return head->val==val?head->next:head;
        
    }
};