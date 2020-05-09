class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        
        i = 1
        while i <= len(nums):
            x = nums[i-1]
            if 1 <= x <= len(nums) and nums[x-1] != x:
                nums[i-1], nums[x-1] = nums[x-1], x
            else:
                i += 1
            
        for i in range(len(nums)):
            if nums[i]!=i+1:
                return i+1
        return len(nums) + 1
        
        
        
        
#         smallest = 1
#         while smallest in nums:
#             smallest+=1
            
                
        
#         numSet = set(nums)
        
#         while smallest in numSet:
#             smallest+=1
            
        # return smallest