# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def numComponents(self, head: ListNode, G: List[int]) -> int:
        
        g = set(G)
        f = 0
        temp = head
        count = 0
        while temp:
            if temp.val in g:
                f = 1
            else:
                if f == 1:
                    count+=1
                f = 0
            temp = temp.next
        if f==1:
            count+=1
        return count