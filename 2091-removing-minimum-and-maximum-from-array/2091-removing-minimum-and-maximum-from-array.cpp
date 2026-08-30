class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int minIndex = 0;
        int maxIndex = 0;

        for(int i=0;i<n;i++){
            if(nums[i]<nums[minIndex]){
                minIndex=i;
            }
            if(nums[i]>nums[maxIndex]){
                maxIndex=i;
            }
        }
        int f=max(minIndex,maxIndex)+1;
        int b=n-min(minIndex,maxIndex);

        int fb=minIndex +1+n-maxIndex;
        int bf=maxIndex+1+n-minIndex;

        return min({f,b,fb,bf});
    }
};