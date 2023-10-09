class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int count = 0;
        while(i<s.length() && j<t.length()){
            if(s[i] == t[j]){
                i++;
                j++;
                count++;
            }
            else
                j++;
        }
        if(count == s.length())
            return true;
        return false;
    }
};