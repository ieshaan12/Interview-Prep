class Solution:
    def isLongPressedName(self, name: str, typed: str) -> bool:
        
        if name[0]!=typed[0]:
            return False
        i,j=1,1
        while i < len(name):
            if name[i] == typed[j]:
                i+=1
                j+=1
            elif name[i-1]==typed[j]:
                j+=1
            else:
                return False
            if j==len(typed) and i!=len(name):
                return False
        if j!=len(typed):
            last = name[i-1]
            while j<len(typed):
                if typed[j]!=last:
                    return False
                j+=1
        return True