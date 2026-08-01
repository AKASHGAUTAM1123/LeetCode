class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> f;
        int left = 0;
        int res = 0;

        for (int right = 0; right < s.size(); right++) {
            f[s[right]]++;

            while (f[s[right]] > 1) {
                f[s[left]]--;
                left++;
            }

            res = max(res, right - left + 1);
        }

        return res;
    }
};