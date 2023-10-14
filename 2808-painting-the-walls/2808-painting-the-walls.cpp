class Solution {

    vector<vector<int>> dp;
    int n;

    int DFS(int index, int paidTime, vector<int>& cost, vector<int>& time)
    {
        if(index >= n)
            return paidTime >= 0 ? 0 : INT_MAX;

        if(paidTime >= n - index)
            return 0;
        
        if(dp[index][paidTime + n] != -1)
            return dp[index][paidTime + n];

        int paid = DFS(index + 1, paidTime + time[index], cost, time);
        if(paid != INT_MAX)
            paid += cost[index];

        int free = DFS(index + 1, paidTime - 1, cost, time);

        return dp[index][paidTime + n] = min(paid, free);
    }   

public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        
        n = cost.size();
        dp = vector<vector<int>>(n, vector<int>(2 * n + 1, -1));
        return DFS(0, 0, cost, time);
    }
};