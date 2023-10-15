class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i;

        for(i=0;i<nums.size();i++){
            if(target==nums[i]){
                break;
            }
        }

        if(i==nums.size()) 
            return -1;
        return i;
    }
};