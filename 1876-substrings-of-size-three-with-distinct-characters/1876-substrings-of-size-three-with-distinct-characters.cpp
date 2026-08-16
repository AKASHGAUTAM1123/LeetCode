class Solution {
public:
    int countGoodSubstrings(string s) {
        int n=s.length();
        int left=0;
        int ans=0;

        for(int right=0;right<n;right++){
            if(right-left+1>3){
                left++;
            }
            if(right-left+1 == 3){
                if(s[left]!=s[left+1]&&
                s[left+1]!=s[right]&&
                s[left]!=s[right]){

                    ans++;
                }
            }
        }
        return ans;
    }
};