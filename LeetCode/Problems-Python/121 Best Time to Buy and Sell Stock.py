#Time Taken(%):52 ms
#Memory usage(%):14.8 MB
#Your Name(optional):nitinvinayak
#// Your solution here


class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices)==0: return 0
        minSoFar=prices[0]
        netMax=0
        for price in prices:
            profit=price-minSoFar
            netMax=max(netMax,profit)
            if price<minSoFar:
                minSoFar=price
        return netMax
