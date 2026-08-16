class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
     int n=arr.size();
     int left=0;
     int sum=0;
     int ans=0;

     for(int right=0;right<n;right++){
        sum+=arr[right];

        if(right-left+1>k){
            sum-=arr[left];
            left++;
        }
        if(right-left+1==k){
            if(sum>=k*threshold){
                ans++;
            }
        }
     } 
     return ans;  
    }
};