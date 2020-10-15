# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inOrder(self,root,depth):
        if root:
            
            self.lists.append((root.val,depth))
            
            self.inOrder(root.left,depth+1)
            self.inOrder(root.right,depth+1)
        
        
        
    def rightSideView(self, root: TreeNode) -> List[int]:
        
        self.lists = []
        
        self.inOrder(root,0)
        
        ans = dict()
        
        for k,d in self.lists:
            ans[d] = k
        
        return list(ans.values())
                
            
            
            