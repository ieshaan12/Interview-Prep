//Time Taken(%):0ms
//Memory usage(%):6.5MB
//Your Name(optional):nitinvinayak
// Your solution here

#define MOD 1000000007
class Solution {
public:
    int countOrders(int n) {
        int i;
        long long ans=1;
        for(i=1;i<n+1;i++){
            ans=(((ans%(MOD)*i)%(MOD))*(2*i-1))%(MOD); 
        }
        return ans;
    }
};