class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> d(256,-1);
        int start = -1, maxi = 0;

        for(int i = 0; i<s.length(); i++){
            if(d[s[i]]> start) start = d[s[i]];
            d[s[i]] = i;
            maxi = max(maxi, i-start);
        }
        return maxi;
    }
};