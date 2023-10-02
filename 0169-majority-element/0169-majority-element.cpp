class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto i: nums)
            mp[i]++;
        
        unordered_map<int,int>::iterator it;
        for(it = mp.begin(); it!=mp.end(); it++){
            if(it->second > nums.size()/2)
                return it->first;
        }
        return 0;
    }
};