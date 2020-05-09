# Simple but elegant

class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        prev = 0
        cur = 1
        count = 0
        for i in range(1,len(s)):
            if s[i] == s[i-1]:
                cur+=1
            else:
                prev = cur
                cur = 1
            if prev >= cur:
                count+=1
        return count