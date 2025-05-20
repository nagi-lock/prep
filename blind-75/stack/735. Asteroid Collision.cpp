class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto x: asteroids){
            // yeh hi case mein collide hoga
            bool put = true;
            while(st.size() && (st.top()>0 && x<0 )){
                if(st.top() == abs(x)){
                    st.pop();
                    put = false;
                    break;
                }
                else if(st.top()< abs(x)){
                    st.pop();
                } else{
                    // top larger
                    put = false;
                    break;
                }
            }
            if(put){
                st.push(x);
            }
        }
        vector<int> ans;
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};