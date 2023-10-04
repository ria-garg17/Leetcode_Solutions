class Solution {
public:
    int hIndex(vector<int>& citations) {
        priority_queue<int> pq;
        for(int i = 0; i<citations.size(); i++){
            pq.push(citations[i]);
        }

        int count = 0;
        while(!pq.empty()){
            if(count >= pq.top())
                return count;
            count++;
            pq.pop();
        }
        return count;
    }
};