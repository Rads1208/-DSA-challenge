//Two pointer approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ans;
        vector<int> Z;
        for(int i = 0; i<nums.size(); i++){
             ans = target - nums[i];
            for(int j = i+1; j<nums.size(); j++){

                if(ans == nums[j])
                {
                  Z.push_back(i);
                  Z.push_back(j);
                    break;

                }
            }
            if(Z.size()==2)
                break;
        }
        return Z;
    }
};

//Hash Maps approach
//TC
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> v;
        for(int i = 0; i< nums.size(); i++)
        {
            if(m.find(target-nums[i])!=m.end()){
                v.push_back(m[target-nums[i]]);
                v.push_back(i);

                return v;
            }
            else m[nums[i]] = i;
        }
        return v;
    }
};
