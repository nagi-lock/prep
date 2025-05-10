class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        unordered_map<string, vector<string>> mp;

        for(auto x: strs){
            string t = x;
            sort(x.begin(), x.end());
            // matlab mil gya
            mp[x].push_back(t);
        }

        for(auto x: mp){
            vector<string> ans;
            for(auto y:x.second){
                ans.push_back(y);
            }
            result.push_back(ans);
        }
        return result;


    }
};