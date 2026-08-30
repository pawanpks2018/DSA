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
    void reorderList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return;
        ListNode * fast=head;
        ListNode *slow=head;
        ListNode *prev=NULL;

        while(fast->next && fast->next->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
            
        }
        
       

        ListNode *temphead=slow->next;
        slow->next=nullptr;
        
        ListNode* tprev=NULL;
        while(temphead){

            ListNode *temp=temphead->next;
            temphead->next=tprev;
            tprev=temphead;
            temphead=temp;
        }
        slow=tprev;

        ListNode * curr=head;
        ListNode * cprev=NULL;
        while(slow){
            ListNode *temp1=curr->next;
            ListNode *temp2=slow->next;
            curr->next=slow;
            slow->next=temp1;
            cprev=curr;
            curr=temp1;
            slow=temp2;
            
        }
        //if(slow){cprev->next=slow;}
        return ;



        

      
    }
};