class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        int i = 0, j = 0;
        int ans;

        while(i<n && j<m){
            ans = i;
            while(haystack[i] == needle[j] && i<n && j<m){
                i++;
                j++;
            }
            if(j == m)
                return ans;
            else if(j<m && haystack[i] != needle[j]){
                j = 0;
                i = ans + 1;
            }
        }
        return -1;
    }
};