class Solution:
    def firstUniqChar(self, s: str) -> int:
        
        
        s = s + ' '
        
        check = set()
        
        for i in range(len(s)-1):
            if s[i] in check:
                continue
            elif s[i] in s[i+1:]:
                check.add(s[i])
            else:
                return i
        return -1
                
                
        
#         first = []
#         t = set()
#         for i in s:
#             if i not in t:
#                 t.add(i)
#                 first.append(i)
#             else:
#                 try:
#                     first.remove(i)
#                 except:
#                     pass
                
#         if not first:
#             return -1
        
#         return s.index(first[0])
                
        