#define mod 1000000007
class Solution {
    int solve(int i, int steps, vector<vector<int>>& dp)
    {
        if(i < 0 || i >= dp.size()) //don't go outside the limits
          return 0; 
        if(steps == 0)   //if you have aken all the steps
          return (i==0); //return 1 if you are at 0 index

        if(dp[i][steps] != -1) //memoization step
          return dp[i][steps];
        
        int left =  solve(i-1,steps-1,dp); //decrement i
        int stay = solve(i,steps-1,dp);    //stay on the same index i.e. 'i'
        int right = solve(i+1,steps-1,dp); //increment i
        return dp[i][steps] = (1LL*left + stay + right)%mod; //typecast to long long to avoid overflow
    }
public:
    int numWays(int steps, int arrLen) {
        vector<vector<int>> dp(min(arrLen,steps/2+1),vector<int>(steps+1,-1));
        return solve(0,steps,dp);
    }
};