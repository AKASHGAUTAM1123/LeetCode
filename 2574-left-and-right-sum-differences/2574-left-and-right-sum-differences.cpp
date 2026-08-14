class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int sum=0;
        for(int num:nums){
            sum+=num;
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int right=sum-nums[i]-left;
            ans[i]=abs(right-left);
            left+=nums[i];
        }
        return ans;
    }
};