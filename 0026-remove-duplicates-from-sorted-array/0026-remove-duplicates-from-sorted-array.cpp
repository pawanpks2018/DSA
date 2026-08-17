class Solution {
public:
    int removeDuplicates(vector<int>& nums) {


        int first=0;
        int second=1;
        int s=1;
        for(second ; second< nums.size(); second++){
            if(nums[second]!= nums[second-1])
            {

                nums[first+1]=nums[second];

                first++;

                s=first;

            }
        


        }
        return first+1;
    }
};