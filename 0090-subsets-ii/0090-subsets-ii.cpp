class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        vector<int> curr;
        check(result,curr,0,nums);
        return result;
        
    }
    void check(vector<vector<int>> & result,vector<int> &curr,int index,vector<int>&nums){

        if(index==nums.size()){
            result.push_back(curr);
            return;

        }
        if(index<nums.size()){
            curr.push_back(nums[index]);
            check(result,curr,index+1,nums);
            curr.pop_back();
            while(index+1<nums.size() && nums[index]==nums[index+1]) index++;

            check(result,curr,index+1,nums);
        }

    }
};