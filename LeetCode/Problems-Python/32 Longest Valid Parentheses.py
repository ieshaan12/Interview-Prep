#//Time Taken(%):44 ms
#//Memory usage(%):14.2 MB
#//Your Name(optional):nitinvinayak
#// Your solution here
class Solution:
    def longestValidParentheses(self, s: str) -> int:
        dp=[]
        n=len(s)
        res=0
        dp.append(0)
        for i in range(1,n):
            if s[i]=='(':
                dp.append(0)
            else:
                L=dp[i-1]
                if (s[i-L-1]=="(" and i-L-1>=0):
                    dp.append(dp[i-1]+2)
                    if (i-L-2>=0):
                        dp[i]+=dp[i-L-2]
                else:
                    dp.append(0)
            res=max(res,dp[i])
        return res