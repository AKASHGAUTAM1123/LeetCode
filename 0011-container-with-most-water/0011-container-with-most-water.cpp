class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int ans = 0;

        while(left<right){
            int width = right - left;
            int heights = min(height[left],height[right]);
            int area = width * heights;
            ans = max(ans,area);

            height[left]<height[right]?left++:right--;
        }
        return ans;
    }
};