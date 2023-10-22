class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> mp;
        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';

        stack<char> st;
        unordered_map<char,char>::iterator it;

        for(int i = 0; i<s.length(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else{
                if(st.empty())
                    return false;
                else{
                    char temp = st.top();
                    it = mp.find(s[i]);
                    if(temp == it->second)
                        st.pop();
                    else
                        return false;
                }
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};