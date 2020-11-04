//Time Taken(%): 0ms
//Memory usage(%): 6.7MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int numDecodings(string s) {
        int n=s.size(),i;
        vector<int> dp(n+1,0);
        //Empty suffix Array
        dp[n]=1;
        dp[n-1]=s[n-1]=='0'?0:1;
        for (i=n-2;i>=0;i--){
            if (s[i]=='0'){
                dp[i]=0;
                continue;
                }
            dp[i]=dp[i+1];
            if (s[i]=='1' || (s[i]=='2' && s[i+1]<='6')){
                dp[i]+=dp[i+2];
                // dp[i]++;
            }
            
        }
        // cout<<dp[1]<<endl;
        return dp[0];
        
    }
};