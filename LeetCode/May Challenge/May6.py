class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        
        d = dict()
        for i in nums:
            if i not in d:
                d[i] = 1
            else:
                d[i] += 1
                
        
        max_key = -1
        val = -1
        for k,v in d.items():
            if v>val:
                max_key = k
                val = v
        return max_key
            
            