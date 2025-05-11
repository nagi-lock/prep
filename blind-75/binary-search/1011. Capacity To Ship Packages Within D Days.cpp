class Solution {
public:

    int cond(vector<int>& weights, int days, int mid){
        
        int sum = 0;
        int cnt = 1;
        for(auto x: weights){
            if(x+sum>mid){
                cnt++;
                sum = x;
            } else{
                sum = sum+x;
            }
        }
        // cnt -> 2 days-> 5
        return cnt <= days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 0;
        int r = 1e9;
        for(auto x: weights) l = max(l, x);

        while(l<r){
            // cond me hamesha neglect karo bhaii
            int mid = l+(r-l)/2;
            if(cond(weights, days, mid)){
                r = mid;
            } else{
                l = mid+1;
            }
        }
        return l;
    }
};