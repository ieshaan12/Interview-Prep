//Time Taken(%):4 ms
//Memory usage(%):7.6 MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size(),i,L,res;
        if(n==0) return 0;
        vector<int> dp(n,0);
        
        dp[0]=0;
        res=dp[0];
        for (i=1;i<n;i++){
            if(s[i]=='(') dp[i]=0;
            
            else{
                L=dp[i-1];
                if(i-L-1<0 || s[i-L-1]==')')
                    dp[i]=0;
                else{
                    dp[i]=2+dp[i-1];
                    
                    if(i-L-2>=0)
                        dp[i]+=dp[i-L-2];
                }
            }
                res=max(res,dp[i]);
        }
        return res;
    }
    
};