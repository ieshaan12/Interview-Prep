# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
        
    def __init__(self):
        self.tot = 0
    def convertBST(self, root: TreeNode) -> TreeNode:
        
        if root:
            
            self.convertBST(root.right)
            self.tot += root.val
            root.val = self.tot
            self.convertBST(root.left)
        
        return root
        
        
        
        
#         self.inOrd = []
#         self.inOre = []
        
#         self.inOrder(root)
        
#         self.inOrd.sort(key = lambda root:root.val)
        
#         for i in range(len(self.inOrd)-1,-1,-1):
            
#             sums = 0
            
#             for j in self.inOrd[i:]:
#                 sums += j.val
            
#             self.inOre.insert(0,sums)
        
#         for i in range(len(self.inOrd)):
            
#             self.inOrd[i].val = self.inOre[i]
            
#         return root
            
            