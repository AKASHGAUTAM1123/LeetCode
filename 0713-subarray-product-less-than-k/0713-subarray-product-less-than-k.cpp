class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        long long prod=1;
        int count=0;
        if(k<=1) return 0;
        for(int right=0;right<n;right++){
            prod*=nums[right];

            while(prod>=k){
                prod/=nums[left];
                left++;
            }
            count+=right-left+1;
        }
        return count;
    }
};