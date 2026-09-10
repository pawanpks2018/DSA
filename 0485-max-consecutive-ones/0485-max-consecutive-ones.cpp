class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1=0;
        int count=0;
        for(auto x:nums){
            if(x != 1){
                max1=max(max1,count);
                count=0;
            }else{
                count++;
            }
        }
        return max(max1,count);
        
    }
};