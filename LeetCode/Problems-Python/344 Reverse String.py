class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        t = len(s)
        for i in range(t//2):
            s[i],s[t-i-1] = s[t-i-1],s[i] 
        