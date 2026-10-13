class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int>freq(256,0);
        for(unsigned char c:s){
            freq[c]++;
        }
        for(unsigned char c:t){
            freq[c]--;
            if(freq[c]<0){
                return false;
            }
        }
        return true;
    }
};