//Time Taken(%): 100ms
//Memory usage(%): 54.2MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int n=nums.size(),i,j;
        
        if(S>1000 || S<-1000) return 0;
        
        vector<vector<int>> dp(n,vector<int>(4001,0));
        
        //Base cases
        dp[n-1][nums[n-1]+2000]=1;
        dp[n-1][-nums[n-1]+2000]+=1;
        
        for(i=n-2;i>=0;i--){
            for(j=-1000;j<=1000;j++){
                dp[i][j+2000]=dp[i+1][j-nums[i]+2000]+dp[i+1][j+nums[i]+2000];
            }
        }
        return dp[0][S+2000];
    }
};