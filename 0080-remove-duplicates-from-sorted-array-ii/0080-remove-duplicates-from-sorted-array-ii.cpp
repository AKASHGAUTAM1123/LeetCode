class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n;
        int officer=1;
        int res=2;
        int cm=2;
        while(cm<n){
            if(nums[cm]==nums[officer-1]&&
            nums[cm]==nums[officer]){
                cm++;
                continue;
            }
            nums[officer+1]=nums[cm];
            officer++;
            cm++;
            res++;
        }
        return res;
    }
};