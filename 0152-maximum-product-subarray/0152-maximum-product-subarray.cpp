class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxproduct = nums[0];
        int minproduct = nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++){
            int v1=nums[i];
            int v2=maxproduct*nums[i];
            int v3=minproduct*nums[i];
            maxproduct=max(v1,max(v2,v3));
            minproduct=min(v1,min(v2,v3));
            ans=max(ans,max(maxproduct,minproduct));
        }
        return ans;
    }
};