class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=1;
        sort(nums.begin(),nums.end());
        for(;i<nums.size();i++){
            if(nums[i]==nums[i-1]) break;
            
        }
       return nums[i]; 
    }
};