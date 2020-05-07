# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution:
    store = {}
    def recurCall(self,low,high):
        if (low <= high):
            mid = low + (high-low)//2
            
            midVersion = isBadVersion(mid)
            
            if midVersion and not(isBadVersion(mid-1)):
                return mid
            
            if midVersion:
                self.store[mid] = True
                return self.recurCall(low,mid)
            
            else:
                self.store[mid] = False
                return self.recurCall(mid+1,high)
        
        return -1
                
            
            
            
            
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        self.store = dict()
        return self.recurCall(0,n)