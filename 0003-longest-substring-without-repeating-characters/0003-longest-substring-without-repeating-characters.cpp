class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left=0,right=0;
       int res=0;
       unordered_map<char,int>f;
       for(int right=0;right<s.size();right++){
        f[s[right]]++;

        int k=right-left+1;
        while(f.size()<k){
            f[s[left]]--;
            if(f[s[left]] == 0){
                f.erase(s[left]);

            }
            left++;
            k=right-left+1;
        }
        res=max(res,right-left+1);
       } 
       return res;
    }
};