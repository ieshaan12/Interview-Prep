# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rangeSumBST(self, root: TreeNode, L: int, R: int) -> int:
        
        stack = [root]
        sums = 0
        
        while stack:
            q = stack.pop(0)
            
            if q.val<=R and q.val>=L:
                sums += q.val
            
                if q.left:
                    stack.append(q.left)
                if q.right:
                    stack.append(q.right)
                    
            elif q.val > R:
                if q.left:
                    stack.append(q.left)
            elif q.val < L:
                if q.right:
                    stack.append(q.right)

        return sums