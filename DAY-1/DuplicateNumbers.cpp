class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int count ;
        int l = 1;
        int h = nums.size()-1;

        while(l<=h){
            int mid = l + (h-l)/2;
            count  = 0;
             for(int n:nums){
                if(n <= mid) {
                    ++count;
            }
        }

            if( count <= mid )

                l = mid+1;


            else
                h = mid-1;

        }
        return l;
    }
};
