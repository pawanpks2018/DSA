class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mymap;
        for(int i=0; i<nums.size(); i++){
            int remSum=target-nums[i];
            if(mymap.find(remSum) !=mymap.end()) return{mymap[remSum],i};
            mymap[nums[i]]=i;
        }

        return{};
    }
};