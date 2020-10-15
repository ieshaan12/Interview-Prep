class Solution:
    def fractionToDecimal(self, numerator: int, denominator: int) -> str:
        ans = ""
        if numerator == 0:
            return "0"
        if (numerator<0 and not denominator<0) or (not numerator<0 and denominator<0):
            ans += "-"
        
        numerator = abs(numerator)
        denominator = abs(denominator)
        
        ans += str(numerator//denominator)
        if numerator % denominator == 0:
            return ans
        
        ans+= "."
        
        numerator %= denominator
        
        i = len(ans)
        
        store = dict()
        
        while numerator:
            if numerator not in store.keys():
                store[numerator] = i
            else:
                i = store[numerator]
                ans = ans[:i] + "(" + ans[i:] + ")"
                return ans
            numerator *= 10
            ans+=str(numerator//denominator)
            numerator%=denominator
            i+=1
            
        return ans
        