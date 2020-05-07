class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        
        j = set(J)
        count = 0
        for i in S:
            if i in j:
                count+=1
        
        return count
        