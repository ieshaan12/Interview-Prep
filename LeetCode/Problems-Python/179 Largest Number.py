class Solution(object):
    def largestNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: str
        """
        if not nums:
            return 0
        
        def comp(first,second):
            if int(first+second) > int(second+first):
                return -1
            return 1
        
        nums = list(map(str,nums))
        nums.sort(cmp = comp)
        
        return str(int(''.join(nums)))
        