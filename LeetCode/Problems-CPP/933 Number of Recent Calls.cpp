// Time Taken(%):244ms
// Memory usage(%):58.3MB
// Your Name(optional):Aditya Upadhyay
class RecentCounter {
public:
    vector<int> st;
    RecentCounter() {
        st.clear();
    }
    
    int ping(int t) {
        st.push_back(t);
        vector<int> ::iterator low,high;
        low = lower_bound(st.begin(),st.end(),t-3000);
        high = lower_bound(st.begin(),st.end(),t);
        return high-low+1;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */