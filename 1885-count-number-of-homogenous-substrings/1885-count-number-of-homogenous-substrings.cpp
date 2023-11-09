class Solution {
public:
    int countHomogenous(string s) {
    long long mod = 1000000007;
        long long max_count = 0;

        for(int i=0,j=0;i<s.size();i++){

            if(s[i] != s[j]) continue;

                while(s[i] == s[j] && j < s.size()){
                    j++;
                }
                long long count = j-i;
                max_count += ((count%mod)*(count+1)%mod) / 2;

        }
        return (int)max_count;
    }
};