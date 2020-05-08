# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def dfs(self, head, tree):
        if not head:
            return True
        if not tree:
            return False
        
        if head.val==tree.val:
            return self.dfs(head.next,tree.left) or self.dfs(head.next,tree.right)
        
        return False
        
        
    def isSubPath(self, head: ListNode, root: TreeNode) -> bool:
        
        if self.dfs(head,root):
            return True
        if not root:
            return False
        return self.isSubPath(head,root.left) or self.isSubPath(head,root.right)
            
        