class Solution {
public:
    int find(vector<int>&a){
        int maxi=1;
        for(int i=0;i<256;i++){
            maxi=max(maxi,a[i]);
        }
        return maxi;
    }
    int characterReplacement(string s, int k) {
        int n=s.size();
        int left=0;
        int ans=INT_MIN;
        vector<int>f(256,0);
        for(int right=0;right<n;right++){
            f[s[right]]++;
            int len = right-left+1;
            int maxlen = find(f);
            int diff = len - maxlen;

            while(diff>k){
                f[s[left]]--;
                left++;
                maxlen=find(f);
                len=right-left+1;
                diff=len-maxlen;
            }
            len=right-left+1;
            ans=max(ans,len);
        }
        return ans;
    }
};