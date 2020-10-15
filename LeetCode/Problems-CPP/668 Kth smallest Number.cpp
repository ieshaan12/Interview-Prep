// Time Taken(%):92ms
// Memory usage(%):6.1MB
// Your Name(optional):Aditya Upadhyay
class Solution {
public:
    int num_less(int start,int count,int num){
        return ceil(min((double)num/start-1,(double)count));
    }
    //less and greater_equals
    int num_greater(int start,int count,int num){
        return ceil(max(count-(double)num/start,(double)0));
    }
    int pos_below(int m,int n,int num){
        int count=0;
        for(int i=1;i<=n;i++){
            count+=num_less(i,m,num);
        }
        return count;
    }
    int pos_above(int m,int n,int num){
        int count=0;
        for(int i=1;i<=n;i++){
            count+=num_greater(i,m,num);
        }
        return count;
    }
    int findKthNumber(int m, int n, int k) {
        //n*log(mn)
        int lo=1;
        int hi=m*n;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            int rank_b = pos_below(m,n,mid);
            int rank_a = pos_above(m,n,mid);
            int repeatCount=m*n-rank_b-rank_a;
            // cout << mid << " " << rank_b <<" " << rank_a << endl;
            if(rank_b<k && rank_b+repeatCount>=k) return mid;
            else if(rank_b<k){
                lo=mid+1;
            }else hi=mid-1;
        }
        // cout << lo <<" "<<hi << endl;
        return min(hi,lo);
    }
};