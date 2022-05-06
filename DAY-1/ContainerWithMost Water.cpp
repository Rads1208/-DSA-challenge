class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int maxi = 0;

        while(i<=j)
        {
            int water = (j-i)*min(height[i], height[j]);
            maxi = max(maxi, water);
            if(height[i]<height[j]) i++;
            else if(height[j]<height[i]) j--;
            else{
                i++;
                j--;
            }
        }
         return maxi;
    }

};
