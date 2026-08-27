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
    ListNode* sortList(ListNode* head) {
        // bruteforce
        vector<int> nums;

        ListNode* curr = head;
        while (curr) {
            nums.push_back(curr->val);
            curr = curr->next;
        }
        sort(nums.begin(),nums.end());
        ListNode * cur=head;
        int i=0;
        while(cur){
            cur->val=nums[i];
            cur=cur->next;
            i++;

        }
        return head;
    }
};