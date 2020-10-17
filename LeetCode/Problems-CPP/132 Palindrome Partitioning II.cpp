//Time Taken(%):4 ms
//Memory usage(%):7.6 MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    bool isPalindrome(string &s,int startId, int endId){
        int i=startId, j=endId;
        
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            i++;j--;
        }
        return true;
    }
    int minCut(string s) {
        int n=s.size(),i,j;       
        vector<int> dp(n,0);
        
        for(i=0;i<n;i++){
            dp[i]=INT_MAX;
            for(j=i;j>=0;j--){
                if(isPalindrome(s,j,i) ){
                    if(j>0)
                        dp[i]=min(dp[i],1+dp[j-1]);
                    else{
                        dp[i]=0;
                    }
                }
                    
            }
        }
        return dp[n-1];
    }
};