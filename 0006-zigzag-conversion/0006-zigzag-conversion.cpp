class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        
        vector<string> ans(numRows);
        int j = 0;
        int flag = 1;

        for(auto it: s){
            if(flag == 1){
                ans[j] += it;
                j++;
                if(j == numRows){
                    j-=2;
                    flag = 2;
                }
            }
            else{
                ans[j] += it;
                j--;
                if(j == -1){
                    j+=2;
                    flag = 1;
                }
            }
        }

        string finalAns;
        for(auto str : ans){
            finalAns += str;
        }
        return finalAns;
    }
};