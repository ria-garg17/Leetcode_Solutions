class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string n = strs[0], m = strs[strs.size()-1];

        string ans;
        for(int i = 0; i<n.length(); i++){
            if(n[i] != m[i]) break;
            else ans += n[i];
        }
        return ans;
    }
};