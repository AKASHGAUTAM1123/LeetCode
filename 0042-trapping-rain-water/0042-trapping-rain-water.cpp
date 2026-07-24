class Solution {
public:
    int trap(vector<int>& height) {

        int left = 0;
        int right = height.size() - 1;

        int lm = 0;
        int rm = 0;

        int t = 0;

        while (left < right) {

            if (height[left] < height[right]) {

                if (height[left] >= lm) {
                    lm = height[left];
                } else {
                    t += lm - height[left];
                }

                left++;

            } else {

                if (height[right] >= rm) {
                    rm = height[right];
                } else {
                    t += rm - height[right];
                }

                right--;
            }
        }

        return t;
    }
};