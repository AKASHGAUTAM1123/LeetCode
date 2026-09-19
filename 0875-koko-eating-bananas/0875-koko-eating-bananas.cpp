class Solution {
public:
    long long fun(vector<int>&piles,int n,int speed){
        long long h = 0;
        for(int i=0;i<n;i++){
            h += piles[i]/speed;
            if(piles[i]%speed!=0){
                h++;
            }
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int left=1;int res = INT_MAX;
        int right=*max_element(piles.begin(),piles.end());
        while(left<=right){
        int mid = left+(right-left)/2;
        long long hour = fun(piles,piles.size(),mid);

        if(hour>h){
            left=mid+1;
        }else{
            res = mid;
            right=mid-1;
        }
    }
        return res;
    }
};