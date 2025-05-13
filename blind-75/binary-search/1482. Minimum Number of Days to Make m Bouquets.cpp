class Solution {
public:

    int cond(vector<int>& bloomDay, int m, int k, int mid){
        int cnt = 0, b = 0;
        for(auto x: bloomDay){
            if(x<= mid){
                cnt++;
                if(cnt == k){
                    b++;
                    cnt = 0;
                }
            }else{
                cnt = 0;
            }
        }
        return b >= m;
        
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int l = *min_element(bloomDay.begin(), bloomDay.end());
        int r = *max_element(bloomDay.begin(), bloomDay.end());

        if(1LL *m*k> bloomDay.size()) return -1;

        while(l< r){
            int mid = l+(r-l)/2;
            if(cond(bloomDay, m, k, mid)){
                r = mid;
            } else{
                l = mid+1;
            }
        }
        return l;

    }
};