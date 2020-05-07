# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def returnParent(self, root, val,d):
        if not root:
            return None,-1
        
        t = None
        if root.left:
            if root.left.val == val:
                return root,d+1
            else:
                t,k = self.returnParent(root.left,val,d+1)
                if t:
                    return t,k
        if root.right:
            if root.right.val == val:
                return root,d+1
            else:
                t,k = self.returnParent(root.right,val,d+1)
                if t:
                    return t,k
                
        return None,-1
                
        
        
        
        
        
    def isCousins(self, root: TreeNode, x: int, y: int) -> bool:
        
        xp,xd = self.returnParent(root,x,0)
        yp,yd = self.returnParent(root,y,0)

        print(xd,xp.val)
        print(yd,yp.val)
        
        if xd == -1 or yd == -1:
            return False
        
        if xp==yp:
            return False
        else:
            if xd == yd:
                return True
        
        return False
        
        
        