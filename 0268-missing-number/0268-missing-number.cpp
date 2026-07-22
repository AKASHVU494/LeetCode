class Solution {
public:
    int missingNumber(vector<int>& nums) {
    
        int sum = (nums.size()*(nums.size()+1))/2;
        int n = 0;
        int x = 0;

        for(int i=0;i<nums.size();i++)
        {
            n = n + nums[i];
        }

        x = sum - n;

        return x;
    
    }
};