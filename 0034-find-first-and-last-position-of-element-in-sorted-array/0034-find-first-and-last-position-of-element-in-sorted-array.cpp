class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int sP = -1, eP = -1;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] == target){
                sP = i;
                break;
            }
        }
        for(int i = n-1; i>=0; i--){
            if(nums[i] == target){
                eP = i;
                break;
            }
        }
        return {sP, eP};
    }
};