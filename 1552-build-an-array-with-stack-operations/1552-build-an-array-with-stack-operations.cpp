class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int currNum = 1;
        int index = 0;

        while (currNum <= n && index < target.size()) {
            int num = target[index];
            if (num == currNum) {
                ans.push_back("Push");
                currNum++;
                index++;
            } else {
                ans.push_back("Push");
                ans.push_back("Pop");
                currNum++;
            }
        }

        return ans;
    }
};