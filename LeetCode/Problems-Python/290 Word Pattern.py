class Solution:
    def wordPattern(self, pattern: str, str: str) -> bool:
        
        d = list(pattern)
        l = str.split()
        
        if len(d)!=len(l):
            return False
        
        mapping = dict()
        
        for i in range(len(d)):
            if d[i] not in mapping:
                if l[i] not in mapping.values():
                    mapping[d[i]] = l[i]
                else:
                    return False
            else:
                if mapping[d[i]]!=l[i]:
                    return False
        
        return True
                    
            