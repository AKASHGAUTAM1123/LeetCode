class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int cm=1;
        int res=1;
        int officer=0;
        while(cm<n){
            if(nums[cm] == nums[cm-1]){
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