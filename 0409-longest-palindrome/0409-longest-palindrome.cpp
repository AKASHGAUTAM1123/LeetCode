class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        bool odd=false;
        int res=0;
        for(auto i: mp){
            int val = i.second;
            if(val%2 == 0){
                res+=val;
            }else{
                odd=true;
            }
        }
        for(auto i:mp){
            int val = i.second;
            if(val%2 == 1){
                res+=val-1;
            }
        }
            if(odd){
                res++;
            }
            return res;
    }
};