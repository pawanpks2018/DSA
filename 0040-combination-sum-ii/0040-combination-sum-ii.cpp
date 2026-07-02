class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        sort(candidates.begin(), candidates.end());
        vector<int> curr;

        check(result, candidates, target, 0, curr, 0);
        return result;
    }
    void check(vector<vector<int>>& result, vector<int>& nums, int target,
               int sum, vector<int> curr, int ind) {
        if (sum == target) {
            result.push_back(curr);
            return;
        }
        if (ind >= nums.size() || sum > target)
            return;

        curr.push_back(nums[ind]);
        check(result, nums, target, sum + nums[ind], curr, ind + 1);
        curr.pop_back();
        while (ind+1 < nums.size() && nums[ind + 1] == nums[ind]) {
            ind += 1;
        }
        check(result, nums, target, sum, curr, ind + 1);
    }
};