class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int>s;
        for(int num:nums){
            s.insert(num);
        }
        int multiple=k;
        while(s.count(multiple)){
            multiple+=k;
        }
        return multiple;
    }
};