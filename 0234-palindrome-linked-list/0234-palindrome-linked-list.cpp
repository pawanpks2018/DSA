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
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;

        }
        ListNode *curr1=head;

        ListNode *curr2=slow;
        ListNode *newprev=NULL;
        while(curr2){
        ListNode *temp=curr2->next;
        curr2->next=newprev;
        newprev=curr2;
        curr2=temp;


       }
        while(head && newprev){
            if(head->val != newprev->val){
                return false;
            }
            head=head->next;
            newprev=newprev->next;
        }
        return true;
        
        
    }
};