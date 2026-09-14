class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right= n-1;
        int res=0;
        while(left<=right){
            int mid = left  + (right-left)/2;
            if(mid < n-1 && nums[mid]<nums[mid+1]){
                left = mid+1;
            }else{
                res = mid;
                right = mid-1;
            }
        }
        return res;
    }
};