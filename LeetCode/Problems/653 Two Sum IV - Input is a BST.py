# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findTarget(self, root: TreeNode, k: int) -> bool:
        
        numSet = set()
        
        def check(root,tgt):
            
            if not root:
                return False
            
            if tgt-root.val in numSet:
                return True
            
            numSet.add(root.val)
            
            return check(root.left,tgt) or check(root.right,tgt)
        
        return check(root,k)
            
        
        