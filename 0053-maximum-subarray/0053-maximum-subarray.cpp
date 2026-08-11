class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestsum=nums[0];
        int n=nums.size();
        int ans=bestsum;
        for(int i=1;i<n;i++){
            int v1=bestsum+nums[i];
            int v2=nums[i];
            bestsum=max(v1,v2);
            ans=max(ans,bestsum);
        }
        return ans;

    }
};