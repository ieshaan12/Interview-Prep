class Solution:
    def longestPalindrome(self, s: str) -> int:
        
        d = dict()
        for i in s:
            if i in d:
                d[i] += 1
            else:
                d[i] = 1
        
        length = 0
        oneCheck = False
        for k,v in d.items():
            if v%2:
                length += (v-1)
                d[k]-=(v-1)
                oneCheck = True
            else:
                length += v     
        
        if oneCheck:
            return length+1        
        return length
        
        
        