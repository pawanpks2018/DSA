class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,mid=0,last=nums.size()-1;
        while(mid<=last)
        {
            if (nums[mid]==0)
             {
                 swap(nums[l],nums[mid]);
                 l++;
                 mid++;
            }else if(nums[mid]==1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[last]);
                last--;
                

            }
        }
        return;
    }
};