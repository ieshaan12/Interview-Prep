# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inOrder(self,root,depth):
        if not root:
            return
        
        self.maxLeft.append((root.val,depth))
        self.inOrder(root.left,depth+1)
        self.inOrder(root.right,depth+1)
        
    def findBottomLeftValue(self, root: TreeNode) -> int:
        
        self.maxLeft = []
        
        self.inOrder(root,0)
        
        t = None
        d = -1
        
        for k,v in self.maxLeft:
            if v > d:
                t = k
                d = v
        
        return t
        
            