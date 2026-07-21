class Solution {
    int firstOccurance(vector<int>&arr,int target){
        int left = 0;
        int right = arr.size()-1;
        int ans = -1;

        while(left<=right){
            int mid = left + (right - left)/2;

            if(arr[mid] == target){
                ans = mid;
                right = mid -1;
            }else if(target<arr[mid]){
                right = mid-1;
            }else{
                left = mid +1;
            }
        }
        return ans;
    }

        int lastOccurance(vector<int>&arr,int target){
            int left = 0;
            int right = arr.size() -1;
            int ans = -1;

            while(left<=right){
                int mid = left + (right -left)/2;

                if(arr[mid] == target){
                    ans = mid;
                    left = mid+1;
                }else if(target<arr[mid]){
                    right = mid -1;
                }else{
                    left = mid +1;
                }
            }
            return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurance(nums,target);
        int last = lastOccurance(nums,target);
        return{first,last};
    }
};