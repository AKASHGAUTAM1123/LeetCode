class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;

        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            } else {
                pos.push_back(nums[i]);
            }
        }

        if (neg.size() == 0) {
            for (int i = 0; i < pos.size(); i++) {
                pos[i] = pos[i] * pos[i];
            }
            return pos;
        }

        if (pos.size() == 0) {
            for (int i = 0; i < neg.size(); i++) {
                neg[i] = neg[i] * neg[i];
            }
            reverse(neg.begin(), neg.end());
            return neg;
        }

        int i = 0, j = 0;
        int nn = neg.size();
        int m = pos.size();
        int id = 0;

        vector<int> res(nn + m);

        for (int i = 0; i < nn; i++) {
            neg[i] = neg[i] * neg[i];
        }
        reverse(neg.begin(), neg.end());

        for (int i = 0; i < m; i++) {
            pos[i] = pos[i] * pos[i];
        }

        while (i < nn && j < m) {
            if (neg[i] <= pos[j]) {
                res[id] = neg[i];
                id++;
                i++;
            } else {
                res[id] = pos[j];
                id++;
                j++;
            }
        }

        while (i < nn) {
            res[id] = neg[i];
            id++;
            i++;
        }

        while (j < m) {
            res[id] = pos[j];
            id++;
            j++;
        }

        return res;
    }
};