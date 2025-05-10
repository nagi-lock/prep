class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v1(26, 0);
        vector<int> v2(26, 0);

        for(auto x: s){
            v1[x-'a']++;
        }
        for(auto x: t){
            v2[x-'a']++;
        }

        for(int i = 0; i< 26; i++){
            if(v1[i]!=v2[i]) return false;
        }
        return true;
    }
};
