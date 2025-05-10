class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        vector<int> ans;
        unordered_map<int, int> mp;
        for(auto x: nums){
            mp[x]++;
        }

        for(auto x: mp){
            pq.push({x.second, x.first});
        }
        while(k--){
            auto t = pq.top();
            ans.push_back(t.second);
            pq.pop();
        }
        return ans;
    }
};