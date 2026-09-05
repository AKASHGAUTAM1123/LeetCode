class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> freq(100001, 0);

        long long sum = 0;
        long long ans = 0;
        int distinct = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            if (freq[nums[i]] == 0)
                distinct++;

            freq[nums[i]]++;

            if (i >= k) {
                sum -= nums[i - k];

                freq[nums[i - k]]--;

                if (freq[nums[i - k]] == 0)
                    distinct--;
            }

            if (i >= k - 1 && distinct == k)
                ans = max(ans, sum);
        }

        return ans;
    }
};