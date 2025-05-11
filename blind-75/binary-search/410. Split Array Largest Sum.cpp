class Solution {
public:

    int feasible(vector<int>& nums, int k, int mid){
        int sum = 0;
        int partition = 1;
        for(auto x: nums){
            if(x+sum>mid){
                sum = x;
                partition++;
            } else{
                sum+=x;
            }
        }
        return partition<=k;
    }

    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        int r = accumulate(nums.begin(), nums.end(), 0);

        while(l< r){
            int mid = l+(r-l)/2;
            if(feasible(nums, k, mid)){
                r = mid;
            } else{
                l = mid+1;
            }
        }
        return l;
    }
};