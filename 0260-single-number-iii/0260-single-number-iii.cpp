class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;

        for(int i=0; i<nums.size(); i++)
        {
            int c=0;
            for(int j=0; j<nums.size(); j++)
            {
                if(nums[i]==nums[j])
                {
                    c++;
                }
            }
            if(c%2!=0)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};