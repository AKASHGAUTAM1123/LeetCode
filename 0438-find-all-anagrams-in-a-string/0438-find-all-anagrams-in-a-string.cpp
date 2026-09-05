class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int>need(26,0);
        vector<int>have(26,0);
        vector<int>ans;
        if(m>n)return ans;
        for(char ch:p){
            need[ch-'a']++;
        }
        int left=0;
        for(int right=0;right<n;right++){
            have[s[right] - 'a']++;

            if(right-left+1>m){
                have[s[left]-'a']--;
                left++;
            }
            if(right-left+1==m&&have==need){
                ans.push_back(left);
            }
        }
        return ans;
    }
};