// Time Taken(%):92.75%(16ms)
// Memory usage(%):13.3MB
// Your Name(optional):Aditya Upadhyay
class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int size=machines.size();
        vector<int> sum(size+1,0);
        for(int i=0;i<size;i++){
            sum[i+1]=sum[i]+machines[i];
        }
        if(sum[sum.size()-1]%size!=0) return -1;
        int max_val=INT_MIN;
        int avg = sum[sum.size()-1]/size;
        for(int i=0;i<machines.size();i++){
            int l = i*avg - sum[i];
            int r = (size-i-1)*avg - (sum[sum.size()-1]-sum[i+1]);
            if(l>0&&r>0) max_val = max(max_val,abs(l)+abs(r));
            else max_val = max(max_val,max(abs(l),abs(r)));
        }
        return max_val;
    }
};