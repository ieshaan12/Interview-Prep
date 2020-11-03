//Time Taken(%): 0ms
//Memory usage(%): 6.3MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1);
        dp[0]=1; // no. of ways we can climb 0 stairs is 1
        dp[1]=1; // no. of ways we can climb 1 stairs is 1
        for(int i=2;i<=n;i++) 
        {
            dp[i]=dp[i-1]+dp[i-2]; // we can two steps before the current step 
        }
        return dp[n];
    }
};