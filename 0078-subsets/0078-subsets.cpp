class Solution {
public:
vector<vector<int>> result;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>curr;
        gensubset(nums,0,curr);
        return result;


    }
    void gensubset(vector<int>&nums,int index,vector<int> &curr){
        if(index==nums.size()){
            result.push_back(curr);
            return;
        }
        gensubset(nums,index+1,curr);
        curr.push_back(nums[index]);
         gensubset(nums,index+1,curr);
         curr.pop_back();

    }
};