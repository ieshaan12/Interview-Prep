"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

class Solution:
        
        
    def cloneGraph(self, node: 'Node') -> 'Node':
        
        if not node:
            return node
        
        d = {node: Node(node.val)}    
        q = [node]
        
        while q:
            for i in range(len(q)):
                cur = q.pop(0)
                for j in cur.neighbors:
                    if j not in d:
                        d[j] = Node(j.val)
                        q.append(j)
                    d[cur].neighbors.append(d[j])
        return d[node]
        
        