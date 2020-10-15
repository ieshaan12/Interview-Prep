class Solution:
    def shortestCompletingWord(self, licensePlate: str, words: List[str]) -> str:
        
        licensePlate = licensePlate.lower()
        
        count = collections.Counter(licensePlate)
        minLen = 10000
        answer = None
        for i in words:
            d = collections.Counter(i)
            f = True
            for k,v in count.items():
                if k.isalpha() and k not in d:
                    f = False
                    break
                else:
                    if k.isalpha() and d[k] < v:
                        f = False
                        break
            
            if f:
                if minLen > len(i):
                    answer = i
                    minLen = len(i)
            
        return answer