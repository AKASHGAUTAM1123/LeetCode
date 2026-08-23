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
        int low=0;
        int res=INT_MIN;
        vector<int>f(256,0);
        for(int high=0;high<n;high++){
            f[s[high]]++;

            int len=high-low+1;
            int maxlen=find(f);
            int diff=len-maxlen;
            while(diff>k){
                f[s[low]]--;
                low++;
                len=high-low+1;
                maxlen=find(f);
                diff=len-maxlen;
            }
            len=high-low+1;
            res=max(res,len);
        }
        return res;
    }
};