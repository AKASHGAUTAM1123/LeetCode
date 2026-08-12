class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size();
        int nodelete=arr[0];
        int onedelete=INT_MIN;
        int ans=arr[0];

        for(int i=1;i<n;i++){
            int prevnodelete=nodelete;
            int prevonedelete=onedelete;

            nodelete=max(prevnodelete+arr[i],arr[i]);
            int v2;
            if(prevonedelete == INT_MIN){
                v2=prevnodelete;
            }else{
                v2=prevonedelete+arr[i];
            }
            onedelete=max(v2,prevnodelete);
            ans=max(ans,max(onedelete,nodelete));
        }
        return ans;
    }
};