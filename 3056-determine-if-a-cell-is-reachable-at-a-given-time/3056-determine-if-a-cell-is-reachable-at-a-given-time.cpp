class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy && t==1){
            return false;
        }
        int difx = abs(sx-fx);
        int dify = abs(sy-fy);
        int travel = max(difx,dify);

        if(t>=travel){
            return true;
        }
        return false;
    }
};