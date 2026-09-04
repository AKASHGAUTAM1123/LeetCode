class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int odd=0;
        int ans=0;
        for(int x:nums){
            if(x%2==1){
                odd++;
            }
                ans+=mp[odd-k];
                mp[odd]++;
        }
        return ans;
    }
};