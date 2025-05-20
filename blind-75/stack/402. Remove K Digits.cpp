class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for(auto x: num){
            while(st.size() && k && st.top()>x){
                st.pop();
                k--;
            }
            st.push(x);
        }

        while(st.size() && k){
            st.pop();
            k--;
        }

        string ans;
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        
        while(ans.size() && ans.back() == '0'){
            ans.pop_back();
        }
        if(ans.size() == 0) return "0";
        reverse(ans.begin(), ans.end());
        return ans;
    }
};