https://leetcode.com/problems/reverse-linked-list/submissions/897083584/

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
        ListNode* curr=head;
        ListNode* prev=NULL;
        if(curr==NULL || curr->next==NULL)
        {
            return curr;
        }
        ListNode* forward=NULL;
        while(curr!=NULL)
        {
            
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
             
        }
        return prev;
    }
};
