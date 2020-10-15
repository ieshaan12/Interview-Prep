class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        
        
        t = collections.Counter(nums)
        
        double, missing = None, None
        for k,v in t.items():
            if v==2:
                double = k
                break
        
        for i in range(1,len(nums)+1):
            if i not in t:
                missing = i
                break
        
        return [double, missing]
                