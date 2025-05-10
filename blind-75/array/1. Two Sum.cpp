class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i = 0; i< nums.size(); i++){
            // condition match
            int findin = target-nums[i];
            // means mil gya
            pollute ka case hai if(mp[findin]) krne se 0 de dehra tha value
            if(mp.find(findin)!=mp.end()){
                return {mp[findin],i};
            }

            mp[nums[i]] = i;        
        }
        return {0,0};
    }
};