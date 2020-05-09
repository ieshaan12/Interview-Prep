class Solution:
    def rotatedDigits(self, N: int) -> int:
        
        # rotate = {"0":"0","1":"1","2":"5","5":"2","6":"9","8":"8","9":"6"}
        # unavail = {"3","4","7"}
        count = 0
        for i in range(1,N+1):
            s = (str(i))
            if '3' in s or '4' in s or '7' in s:
                continue
            if '2' in s or '5' in s or '6' in s or '9' in s:
                count += 1
            
            # f = 0
            # for k in unavail:
            #     if s.count(k):
            #         f = 1
            #         break
            # if f==1:
            #     continue
            # j = 0
            # while j<len(s):
            #     s[j] = rotate[s[j]]
            #     j+=1
            # s = ''.join(s)
            # if int(''.join(s))!=i:
            #     count+=1
        
        return count
        
        
        
        
        