class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        int n = adjacentPairs.size();

        unordered_map<int, vector<int>> mp;
        for (auto& pair : adjacentPairs) {
            mp[pair[0]].push_back(pair[1]);
            mp[pair[1]].push_back(pair[0]);
        }

        int one;
        for (auto& x : mp) {
            if (x.second.size() == 1) {
                one = x.first;
            } 
        }

        vector<int> ans;
        ans.push_back(one);
        unordered_set<int> used;
        used.insert(one);
        
        for (int i = 0; i < n; i++) {
            for (auto& x : mp[one]) {
                if (used.count(x)) continue;
                ans.push_back(x);
                used.insert(x);
                one = x;
                break;
            }
        }

        return ans;
    }
};