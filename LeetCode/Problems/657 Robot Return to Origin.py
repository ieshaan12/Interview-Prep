class Solution:
    def judgeCircle(self, moves: str) -> bool:
        
        
        d = {"L":0,"R":0,"U":0,"D":0}
        
        for i in moves:
            d[i] += 1
            
        if d["L"]!=d["R"] or d["U"]!=d["D"]:
            return False
        
        return True