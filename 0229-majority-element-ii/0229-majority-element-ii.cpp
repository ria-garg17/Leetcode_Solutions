class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }

        int maxi = nums.size()/3;
        vector<int> x;
        if(maxi<1){
            set<int> s;
            for(int i = 0; i<nums.size(); i++){
                s.insert(nums[i]);
            }
            set<int>::iterator it;
            for(it = s.begin(); it!=s.end(); it++){
                x.push_back(*it);
            }
            return x;
        }
        
        map<int,int>::iterator it;
        for(it = mp.begin(); it!=mp.end(); it++){
            if(it->second > maxi){
                x.push_back(it->first);
            }
        }
        return x;
    }
};