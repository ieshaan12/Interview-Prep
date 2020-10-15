class Solution:
    def repeatedStringMatch(self, A: str, B: str) -> int:
        if B in A:
            return 1
        if len(A)>len(B):
            A = A + A
            if B not in A:
                return -1
            else:
                return 2
        count = 1
        new = ""
        while B not in A and len(new)<=len(B):
            new += A
            #print(new,len(new),len(B))
            if B in new:
                return count
            count+=1
        
        if B in new + A:
            return count
        
        return -1
            
        