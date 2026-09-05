class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        unordered_map<int,int>mp;
        int ans=INT_MIN;
        int left=0;
        for(int right=0;right<n;right++){
            mp[fruits[right]]++;

            while(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            int len=right-left+1;
            ans=max(ans,len);
        }
        return ans;
    }
};