class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        stack<char> st;
        string ans;

        for(auto c: s){
            if(c == ' '){
                while(!st.empty()){
                    ans += st.top();
                    st.pop();
                }
                ans += ' ';
            }
            else st.push(c);
        }
        ans.pop_back();
        return ans;
    }
};