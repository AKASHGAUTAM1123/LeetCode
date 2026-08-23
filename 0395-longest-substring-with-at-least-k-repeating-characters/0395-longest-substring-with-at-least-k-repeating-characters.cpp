class Solution {
public:
    int longestSubstring(string s, int k) {
        return solve(s,0,s.size(),k);
    }
    int solve(string&s,int start,int end,int k){
        int f[26]={0};
        for(int i=start;i<end;i++){
            f[s[i]-'a']++;
        }
        for(int i=start;i<end;i++){
            if(f[s[i]-'a']<k){
                int left=solve(s,start,i,k);
                int right=solve(s,i+1,end,k);
                return max(left,right);
            }
        }
        return end-start;
    }
};