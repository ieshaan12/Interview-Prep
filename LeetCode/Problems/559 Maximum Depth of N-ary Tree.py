"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def getDepth(self,root,depth):
        if not root:
            return 0
        d = depth
        for i in root.children:
            d = max(self.getDepth(i,depth+1),d)
        
        return d
    
    
    def maxDepth(self, root: 'Node') -> int:
        if not root:
            return 0
        
        return self.getDepth(root,0) + 1
        
        