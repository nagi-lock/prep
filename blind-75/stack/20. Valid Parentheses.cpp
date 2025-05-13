class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto x: s){
            

            if(x == '{' || x == '(' || x == '['){
                st.push(x);
            }
            else if(st.size() && (x == ')' && st.top()=='(')){
                st.pop();
            }
            else if(st.size() && (x == ']' && st.top()=='[')){
                st.pop();
            }
            else if(st.size() && (x == '}' && st.top()=='{')){
                st.pop();
            } else{
                return false;
            }
        
        }
        return st.size()==0;
    }
};