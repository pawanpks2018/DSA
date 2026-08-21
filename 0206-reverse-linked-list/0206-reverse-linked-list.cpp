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
        if(head==NULL || head->next==NULL) return head;

        ListNode * currp=head;
        ListNode * prevp=NULL;
        ListNode *nextp=head->next;
        while(currp!=NULL){

            currp->next=prevp;
            prevp=currp;
            currp=nextp;
            if(nextp != NULL) nextp=nextp->next;

        }
        
      return prevp;  
    }
};