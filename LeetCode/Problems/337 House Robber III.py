# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Very good solution 

# DFS 

class Solution:
    def alt(self,root):
        if not root:
            return 0,0
        
        lef,lno = self.alt(root.left)
        rig,rno = self.alt(root.right)
        
        current = root.val + lno + rno
        
        others = max(lef + rig , lno + rno, lno + rig, lef + rno)
        
        return current, others
    
    
    
    def rob(self, root: TreeNode) -> int:
        
        return max(self.alt(root))