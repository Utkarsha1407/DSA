class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                st.push('(');  // push open bracket
            } 
            else { // ')'
                if(!st.empty() && st.top() == '(') {
                    st.pop();  // match with '('
                } 
                else {
                    st.push(')'); // unmatched ')'
                }
            }
        }

        // remaining unmatched '(' or ')' in stack
        return st.size();
    }
};