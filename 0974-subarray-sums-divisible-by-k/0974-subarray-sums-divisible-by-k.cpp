class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        unordered_map<int,int> mp;
        int res=0;
        mp[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int ques=sum%k;
            if(ques<0){
                ques+=k;
            }
            int freq=mp[ques];
            res+=freq;
            mp[ques]++;
        }
        return res;
    }
};