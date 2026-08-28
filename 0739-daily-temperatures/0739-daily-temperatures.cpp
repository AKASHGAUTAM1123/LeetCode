class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> res(n, 0);
        stack<int> st;

        st.push(n - 1);

        for(int i = n - 2; i >= 0; i--) {

            while(!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }

            if(st.empty()) {
                res[i] = 0;
            }
            else {
                res[i] = st.top() - i;
            }

            st.push(i);
        }

        return res;
    }
};