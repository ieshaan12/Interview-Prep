"""
# Definition for a Node.
class Node:
    def __init__(self, val, prev, next, child):
        self.val = val
        self.prev = prev
        self.next = next
        self.child = child
"""

class Solution:
    def flatten(self, head: 'Node') -> 'Node':
        
        temp = head
        
        while temp:
            if temp.child:
                nex = temp.next
                temp.next = self.flatten(temp.child)
                temp.child = None
                temp.next.prev = temp
                s = temp.next
                while s.next:
                    s = s.next
                s.next = nex
                if nex:
                    nex.prev = s
            temp = temp.next
        
        return head
        