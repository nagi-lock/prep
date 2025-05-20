class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> v;
        vector<int> ne;

        for(auto x: nums) ne.push_back(x);
        for(auto x: nums) ne.push_back(x);


        for(int i = ne.size()-1; i>=0; i--){
            if(st.size() == 0){
                v.push_back(-1);
            } else{
                while(st.size() && st.top()<= ne[i]){
                    st.pop();
                }
                if(st.size() == 0){
                    v.push_back(-1);
                } else{
                    v.push_back(st.top());
                }
            }
            st.push(ne[i]);
        }
        vector<int> res;
        for(int i = v.size()/2; i< v.size(); i++){
            res.push_back(v[i]);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};