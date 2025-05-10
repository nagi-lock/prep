class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for(auto x: st){
            if(st.find(x-1)==st.end()){
                int length = 0;
                int item = x;
                
                while(st.find(item+length)!=st.end()){
                    length++;
                }
                ans = max(length, ans);
            }
            
        }
        return ans;
    }
};