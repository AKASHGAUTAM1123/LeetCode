class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();

        if(n>m) return false;
        vector<int> need(26,0);
        vector<int> have(26,0);

        for(char ch:s1){
            need[ch-'a']++;
        }
        int low=0;
        for(int high=0;high<m;high++){
            have[s2[high]- 'a']++;

            if(high-low+1>n){
                have[s2[low]-'a']--;
                low++;
            }
            if(high-low+1==n && need==have){
                return true;
            }
        }
        return false;
    }
};