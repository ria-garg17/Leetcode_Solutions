class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<int> dp(n, 1);
        long long mod = 1e9 + 7;

        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++) mp[nums[i]] = i; 

        int ans = 1;

        for(int i = 1; i < n; i++) {
            for(int j = 0; j < i; j++) {
                if(nums[i] % nums[j] != 0) {
                    continue;
                }
                if(mp.find(nums[i] / nums[j]) == mp.end()) continue;

                int in = mp[nums[i] / nums[j]];

                
                // if(in != j) dp[i] = (dp[i] + (2 * (dp[in] % mod) * (dp[j]  % mod)) % mod) % mod;
                dp[i] = (dp[i] + ((dp[in] % mod) * (dp[j]  % mod)) % mod) % mod;
            }
            // cout << dp[i] << endl;
            ans = (ans + dp[i]) % mod;
        }
        return ans;
    }
};
// 2 4 5 10
// 1 2 1 3
//    4    4
//  /  \
//  2  2
//    10
//   /  \
//   2  5
//    10
//   /  \
//  5    2

// 2 3 6 12