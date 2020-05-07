class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        
        sec = dict()
        gue = dict()
        
        for i in range(len(secret)):
            if secret[i] in sec:
                sec[secret[i]] += 1
            else:
                sec[secret[i]] = 1
            
        
        bulls = 0
        cows = 0
        for i in range(len(secret)):
            if secret[i] == guess[i]:
                bulls+=1
                sec[secret[i]]-=1
                if sec[secret[i]]<0:
                    cows-=1
            elif guess[i] in sec and sec[guess[i]]>0:
                sec[guess[i]]-=1
                cows+=1
        
        return str(bulls) + "A" + str(cows) + "B"
        
        