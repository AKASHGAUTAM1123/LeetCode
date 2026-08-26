class NumArray {
public:
    vector<int>preffix;
    NumArray(vector<int>& nums) {
        int n=nums.size();
        preffix.resize(n+1,0);

        for(int i=0;i<n;i++){
            preffix[i+1]=preffix[i]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return preffix[right+1]-preffix[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */