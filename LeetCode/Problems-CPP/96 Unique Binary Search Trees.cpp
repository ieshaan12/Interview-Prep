//Time Taken(%):0 ms
//Memory usage(%):6.3 MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int numTrees(int n) {
        vector<int> dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int nodes=1;nodes<=n;nodes++){
            dp[nodes]=0;
            for(int roots=1;roots<=nodes;roots++){
                dp[nodes]+=dp[roots-1]*dp[nodes-roots];
            }
        }
        return dp[n];
    }
};