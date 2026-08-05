class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum=0;
        int maxSum=INT_MIN;
        for(int num:nums){
            currsum+=num;
            maxSum=max(maxSum,currsum);
            if(currsum<0){
                currsum=0;
            }
        }
        return maxSum;
    }
};