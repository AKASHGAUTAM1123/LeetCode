class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n=nums.size();
        int xors=0;
        bool nonzero=false;

        for(int num:nums){
            xors^=num;

            if(num!=0){
                nonzero=true;
            }
        }
        if(xors!=0){
            return n;
        }
        if(nonzero){
            return n-1;
        }
        return 0;
    }
};