class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int>need(26,0);
        vector<int>have(26,0);
        vector<int> ans;
        if(m>n) return ans;

        for(char ch:p){
            need[ch-'a']++;
        }

        int low=0;
        for(int high=0;high<n;high++){
            have[s[high]-'a']++;

            if(high-low+1>m){
                have[s[low]-'a']--;
                low++;
            }
            if(high-low+1==m&&have==need){
                ans.push_back(low);
            }
        }
        return ans;
    }
};