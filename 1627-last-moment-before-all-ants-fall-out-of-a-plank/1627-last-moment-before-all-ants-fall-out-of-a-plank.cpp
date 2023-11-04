class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int maxy = 0;
        for(auto i : left){
            maxy = max(maxy, i);
        }
        for(auto i : right){
            maxy = max(maxy, n - i);
        }
        return maxy;
    }
};