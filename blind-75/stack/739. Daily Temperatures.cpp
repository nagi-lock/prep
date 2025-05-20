class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st;
        vector<int> v;
        for(int i = temperatures.size()-1; i>=0; i--){
            if(st.size() == 0){
                v.push_back(0);
            } else{
                while(st.size() && st.top().first<= temperatures[i]){
                    st.pop();
                }
                if(st.size() == 0){
                    v.push_back(0);
                } else{
                    v.push_back(st.top().second-i);
                }
            }
            st.push({temperatures[i], i});
        }
        reverse(v.begin(), v.end());
        return v;
    }
};