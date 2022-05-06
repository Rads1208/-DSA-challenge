class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lo = 0;
        int hi = 1;
        while(hi<nums.size())
        {
            if(nums[lo] == 0 && nums[hi]!=0)
            {
                swap(nums[lo++], nums[hi++]);
            }
            else if (nums[lo] == 0 && nums[hi]==0)
            {
                hi++;
            }
            else{
                lo++;
                hi++;
            }
        }
    }
};
