from collections import Counter
class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        
        s = Counter(s)
        t = Counter(t)
        
        print(s)
        print(t)
    
        for i in t:
            if s[i]!=t[i]:
                return i
        
        return ""