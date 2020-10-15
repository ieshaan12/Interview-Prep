class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        
        root = math.sqrt(num)
        if root == int(root):
            return True
        return False