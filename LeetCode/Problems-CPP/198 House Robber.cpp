//Time Taken(%): 0ms
//Memory usage(%): 8.4MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,0);
        if (n==0) return 0;
        //Suffix Array - Bottom up approach
//         dp[n]=0;
//         dp[n-1]=nums[n-1];
        
//         for(int i=n-2;i>=0;i--){
//             dp[i]=max(nums[i]+dp[i+2],dp[i+1]);
//         }
//         return dp[0];
        //Prefix Array - Bottom up approach
        dp[0]=0;
        dp[1]=nums[0];
        for(int i=2;i<n+1;i++){
            dp[i]=max(nums[i-1]+dp[i-2],dp[i-1]);
        }
        return dp[n];
    }
};