class Solution:
    def reverseOnlyLetters(self, S: str) -> str:
        
        i = 0
        j = len(S) - 1
        S = list(S)
        
        while i<j:
            if not S[i].isalpha():
                i+=1
                continue
            if not S[j].isalpha():
                j-=1
                continue
            S[i],S[j] = S[j],S[i]
            i+=1
            j-=1
        return ''.join(S)
                
        