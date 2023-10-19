class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;

        string s1 = "";
        string s2 = "";

        for(int i = 0; i<s.length();){
            if(s[i] == '#' && !st1.empty()){
                st1.pop();
                i++;
            }
            else if(s[i] == '#' && st1.empty() == true)
                i++;
            else{
                st1.push(s[i]);
                i++;
            }
        }

        for(int i = 0; i<t.length();){
            if(t[i] == '#' && !st2.empty()){
                st2.pop();
                i++;
            }
            else if(t[i] == '#' && st2.empty() == true)
                i++;
            else{
                st2.push(t[i]);
                i++;
            }
        }

        while(!st1.empty()){
            char x = st1.top();
            s1+=x;
            st1.pop();
        }

        while(!st2.empty()){
            char x = st2.top();
            s2+=x;
            st2.pop();
        }
        
        if(s1.length() != s2.length())
            return false;
        
        if(s1 != s2)
            return false;
        
        return true;
    }
};