class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        set<vector<int>>st;

        for(int i=0;i<nums.size();i++){
            int left=i+1, right=nums.size()-1;
            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];
                if(sum==0){
                     st.insert({nums[i],nums[left],nums[right]});
                     left++;
                     right--;
                }
                if(sum<0) left++;
                if(sum>0) right--;
            }
        }

        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};