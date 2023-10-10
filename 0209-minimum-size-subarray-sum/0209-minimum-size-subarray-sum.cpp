class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0, sum = 0, res = 10000000;

        while(j<nums.size()){
            sum += nums[j];

            while(sum >= target){
                res = min(res, j-i+1);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        return res == 10000000? 0:res;
    }
};