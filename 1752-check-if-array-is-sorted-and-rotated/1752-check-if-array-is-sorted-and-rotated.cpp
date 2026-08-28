class Solution {
public:
    bool check(vector<int>& nums) {
        int drop=0; 
        for(int i=1;i< nums.size();i++){
            if(nums[i-1]>nums[i]) drop++;
            if(drop>1) return false;


        }
        if(drop==0) return true;
        return nums[0]>=nums[nums.size()-1];
        
        
    }
};