//! 1845. Seat Reservation Manager

class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>>st;
    SeatManager(int n) {
        for(int i=1; i<=n; i++){
            st.push(i);
        }
    }
    
    int reserve() {
        int n = st.top();
        st.pop();
        return n;
    }
    
    void unreserve(int seatNumber) {
        st.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */