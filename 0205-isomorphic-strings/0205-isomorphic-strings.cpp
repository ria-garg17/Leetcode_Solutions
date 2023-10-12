class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())return false;

        unordered_map<char,char>sM, tM;

        for(int i=0;i<s.size();i++)
        {
            if(sM[s[i]]  && sM[s[i]]!=t[i]) return false;
            if(tM[t[i]]  && tM[t[i]]!=s[i]) return false;

            sM[s[i]]=t[i];
            tM[t[i]]=s[i];
        }
        return true;
    }
};