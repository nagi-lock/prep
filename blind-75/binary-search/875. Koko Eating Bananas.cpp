class Solution {
public:

    int cond(vector<int>& piles, int h, int mid){

        int hours = 0;
        for(auto x: piles){
            hours += (x + mid - 1) / mid;
        }

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1e9;
        while(l< r){
            int mid = l+(r-l)/2;

            if(cond(piles, h, mid)){
                r = mid;
            } else{
                l = mid+1;
            }
        }
        return l;
    }
};