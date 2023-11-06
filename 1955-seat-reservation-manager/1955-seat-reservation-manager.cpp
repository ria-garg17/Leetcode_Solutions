class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>> minHeap;

    int seat_marker;
    SeatManager(int n) {
        seat_marker=1;
    }
    
    int reserve() {
        if (!minHeap.empty()) {
        int top=minHeap.top();
        minHeap.pop();
        return top;
        }
        int seat=seat_marker;
        seat_marker++;
        return seat;
    }
    
    void unreserve(int seatNumber) {
        minHeap.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */