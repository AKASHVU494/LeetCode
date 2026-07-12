class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1, ans=0;
        while(left < right){
            int area = (right-left)*min(height[right],height[left]);
            ans=max(ans,area);
            if(height[right] < height[left]){
                right--;
            }
            else{
                left++;
            }
        }
        return ans;
    }
};