//Time Taken(%): 84ms
//Memory usage(%): 8.2MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size(),res;
        vector<int> dp(n,1);
        if (n==0) return 0;
        // dp[0]=1;
        res=1;
        for(int i=1;i<n;i++){
            // dp[i]=1;
            for(int j=i-1;j>=0;j--){
                if (nums[j]<nums[i]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            res=max(res,dp[i]);
        }
        return res;
    }
};