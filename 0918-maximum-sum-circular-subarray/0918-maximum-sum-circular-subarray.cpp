class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total=0;
        int n=nums.size();
        int maxending=nums[0];
        int maxsum=nums[0];
        int minending=nums[0];
        int minsum=nums[0];
        total+=nums[0];

        for(int i=1;i<n;i++){
            total+=nums[i];
            maxending=max(maxending+nums[i],nums[i]);
            maxsum=max(maxsum,maxending);

            minending=min(minending+nums[i],nums[i]);
            minsum=min(minsum,minending);
        }

            if(maxsum<0) return maxsum;
            int circularsum=total-minsum;
            return max(maxsum,circularsum);
        
    }
};