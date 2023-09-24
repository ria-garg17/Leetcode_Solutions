class Solution {
public:
    void subsets(int index, vector<int> &nums, vector<int> &subset, vector<vector<int>> &ans){
        if(index == nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        subsets(index+1, nums, subset, ans);
        subset.pop_back();
        subsets(index+1, nums, subset, ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> subset;
        vector<vector<int>> ans;

        subsets(0, nums, subset, ans);
        set<vector<int>>st;
        for(int i=0;i<ans.size();i++)
        {
            st.insert(ans[i]);
        }
        vector<vector<int>>ans2;
        for(auto s:st)
        {
            ans2.push_back(s);
        }
        return ans2; 
    }
};