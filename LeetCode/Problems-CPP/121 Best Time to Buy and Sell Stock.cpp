//Time Taken(%):8 ms
//Memory usage(%):13.2 MB
//Your Name(optional): nitinvinayak
// Your solution here
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(),i,minSoFar, netMax,profit;
        if (n==0) return 0;
        minSoFar=prices[0];
        netMax=0;
        for(i=0;i<n;i++){
            profit=prices[i]-minSoFar;
            netMax=max(netMax,profit);
            minSoFar=min(minSoFar,prices[i]);
        }
        return netMax;
    }
};