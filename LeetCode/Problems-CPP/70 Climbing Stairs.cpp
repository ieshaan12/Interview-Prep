//Time Taken(%): 0ms
//Memory usage(%): 6.3MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1);
        dp[0]=1; // no. of ways we can climb 0 stairs is 1
        dp[1]=1; // no. of ways we can climb 1 stairs is 1
        for(int i=2;i<=n;i++) 
        {
            dp[i]=dp[i-1]+dp[i-2]; // we can two steps before the current step 
        }
        return dp[n];
    }
};

// class Solution {
// public:
//     int ways(int n,vector<int> &way_list ){
//         if (n==0 || n==1){
//             way_list.at(n)=1;
//             return 1;
//         }
//         if (way_list.at(n)!=-1){
//             return way_list.at(n);
//         } 
//         way_list.at(n)=ways(n-1,way_list)+ways(n-2,way_list);
//         return way_list.at(n);
//     }
//     int climbStairs(int n) {
//         vector<int> way_list(n+1,-1);
//         return ways(n,way_list);
//     }
// };