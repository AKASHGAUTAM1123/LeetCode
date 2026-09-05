class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int left=0;
        int count=0;
        for(int right=0;right<n;right++){
            if(nums[right] == 0){
                count++;
            }
            if(count>k){
                if(nums[left]==0){
                    count--;
                }
                left++;
            }
        }
        return n-left;
    }
};