class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.length();
        bool ans=false;

        if(sentence[n-1] != sentence[0]){
            return false;
        }

        else {
            ans = true;
            for(int i = 0; i<n-1; i++){
                if(sentence[i] == ' ' && sentence[i-1] != sentence[i+1]){
                    ans = false;
                }
            }
        }
        return ans;
    }
};