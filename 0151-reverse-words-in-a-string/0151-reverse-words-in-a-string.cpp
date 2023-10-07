class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp = "";

        for(int i = 0; i<s.length(); i++){
            char ch = s[i];
            if(ch == ' '){
                if(temp != ""){
                    st.push(temp);
                    temp = "";
                }
            }
            else {
                temp += ch;
            }
        }
        if(temp != ""){
            st.push(temp);
            temp = "";
        }

        string ans;
        while(!st.empty()){
            ans += st.top() + " ";
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};