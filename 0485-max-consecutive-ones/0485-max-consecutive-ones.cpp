class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int max_count=0;
        int curr_count=0;

        for(int i = 0;i<n;i++){
            if(nums[i] == 1){
                curr_count++;
            }else{
                max_count=max(max_count,curr_count);
                curr_count=0;
            }
        }
        return max(max_count,curr_count);
    }
};