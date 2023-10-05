class Solution {
public:
    int candy(vector<int>& ratings) {
        int ans = 0;
        if(ratings.size() == 1)
            return 1;
        int i;
        vector<int> temp(ratings.size(), 1);

        //Comparing with previous element
        for(i = 1; i<ratings.size(); i++){
            if(ratings[i] > ratings[i-1] && temp[i] <= temp[i-1])
                temp[i] = temp[i-1] + 1;
        }

        //Comparing with next element
        for(i = ratings.size()-2; i>=0; i--){
            if(ratings[i] > ratings[i+1] && temp[i] <= temp[i+1]){
                temp[i] = temp[i+1] + 1;
            }
        }

        for(i = 0; i<temp.size(); i++){
            ans += temp[i];
        }

        return ans;
    }
};