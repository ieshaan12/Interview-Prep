# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inOrder(self,root):
        if not root:
            return
        
        self.inOrd.append(root.val)
        
        self.inOrder(root.left)
        self.inOrder(root.right)
    
    
    def getMinimumDifference(self, root: TreeNode) -> int:
        
        self.inOrd = []
        self.inOrder(root)
        self.inOrd.sort()
        m = abs(self.inOrd[1] - self.inOrd[0])
        for i in range(2,len(self.inOrd)):
            m = min(m,abs(self.inOrd[i]-self.inOrd[i-1]))
        
        return m