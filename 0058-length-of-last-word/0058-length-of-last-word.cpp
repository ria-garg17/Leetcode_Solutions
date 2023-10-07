class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i;
        for(i = n-1;i>=0;i--){
            if(s[i] != ' ')
                break;
        }
        int j;
        for(j=i;j>=0;j--){
            if(s[j] == ' ')
                break;
        }
        return (i-j);
    }
};