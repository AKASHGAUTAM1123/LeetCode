class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;

        int freq1[26]={0};
        int freq2[26]={0};

        for(char ch:s1){
            freq1[ch-'a']++;
        }
        int left=0;
        int right=0;
        int k=s1.size();

        while(right<s2.size()){
            freq2[s2[right]-'a']++;

            if(right-left+1>k){
                freq2[s2[left]-'a']--;
                left++;
            }
            if(right-left+1 == k){
                bool same=true;
                for(int i=0;i<26;i++){
                    if(freq1[i]!=freq2[i]){
                        same=false;
                        break;
                    }
                }
                if(same)
                    return true;
            }
            right++;
        }
        return false;
    }
};