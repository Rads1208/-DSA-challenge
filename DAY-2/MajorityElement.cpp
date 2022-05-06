/*This can be solved by Moore's voting algorithm.
Basic idea of the algorithm is if we cancel out each occurrence of an element e with all the
other elements that are different from e then e will exist till end if it is a majority element.
Below code loops through each element and maintains a count of the
element that has the potential of being the majority element. If next element is same
then increments the count, otherwise decrements the count. If the count reaches 0 then
update the potential index to the current element and sets count to 1.*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int MajElem = 0;
        int cnt = 1;
        for(int i = 1; i<nums.size(); i++)
        {
            if(nums[i] == nums[MajElem]) cnt++;
            else cnt--;

            if(cnt == 0)
            {
                MajElem = i;
                cnt = 1;
            }
        }
        return nums[MajElem];
    }
};
