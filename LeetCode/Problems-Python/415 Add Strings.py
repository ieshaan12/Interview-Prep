class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        
        # return str(int(num1)+int(num2))
        if int(num1)==0:
            return num2
        if int(num2)==0:
            return num1
        
        if len(num1)==len(num2):
            num1 = "0"+num1
            num2 = "0"+num2
        elif len(num1)>len(num2):
            num2 = num2.zfill(len(num1))
        else:
            num1 = num1.zfill(len(num2))
        carry = 0
        res = ""
        for i in range(len(num1)-1,-1,-1):
            tot = int(num1[i]) + int(num2[i])
            temp = tot + carry
            res = str(temp%10) + res
            carry = temp//10
        
        if carry:
            res = str(carry) + res
        return str(int(res))
            