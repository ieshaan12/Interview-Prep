//Time Taken(%): 8ms
//Memory usage(%): 8.5MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        unordered_set<string> dict(wordDict.begin(),wordDict.end());
        vector<bool> dp(n,false);
        if (n==0) return true;
        //smallest subproblem
        dp[n-1]=((dict.find(s.substr(n-1,1))==dict.end())?false:true);
        
        for(int i=n-2;i>=0;i--){
            string word="";
            for(int j=i;j<n;j++){
                word+=s[j];
                
                //Check if this word is present in the dictionary
                if(dict.find(word)==dict.end())
                    continue;
                //Word is present
                //check if dp[j+1] is true
                if(j+1>=n || dp[j+1]){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[0];
    }
};