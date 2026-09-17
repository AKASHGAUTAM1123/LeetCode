class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        vector<string>ans;
        if(s.length()<10) return ans;
        for(int i=0;i<=s.length()-10;i++){
            string str = s.substr(i,10);
            mp[str]++;

            if(mp[str] == 2){
                ans.push_back(str);
            }
        }
        return ans;
    }
};