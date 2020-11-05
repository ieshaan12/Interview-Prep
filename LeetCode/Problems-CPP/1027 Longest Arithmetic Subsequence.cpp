//Time Taken(%): 336ms
//Memory usage(%): 141.9MB
//Your Name(optional):nitinvinayak
// Your solution here
class Solution {
public:
    int longestArithSeqLength(vector<int>& A) {
        int n=A.size(),res=0;
        vector<unordered_map<int,int>> dp(n);
        
        for(int i=0; i<n; i++){
            //predecessor decisions
//             for(int j=i-1;j>=0;j--){
//                 int cd=A[i]-A[j];
                
//                 //Extend dp[j][cd] by 1
//                 if (dp[j].find(cd)!=dp[j].end()){
//                     dp[i][cd]=max(dp[i][cd],1+ dp[j][cd]);
//                 }
//                 else{
//                     dp[i][cd]=max(dp[i][cd],2); 
//                 }
//                 res=max(res,dp[i][cd]);
//             }
            
        for(int j=0;j<i;j++){
                int cd=A[i]-A[j];
                
                //Extend dp[j][cd] by 1
                if (dp[j].find(cd)!=dp[j].end()){
                    dp[i][cd]=1+ dp[j][cd];
                }
                else{
                    dp[i][cd]=2; 
                }
                res=max(res,dp[i][cd]);
            }
        }
        return res;
    }
};

// class Solution {
// public:
//     int longestArithSeqLength(vector<int>& A) {
        
//         int n = A.size();
//         if(n==2)return n;
        
        
//         return LAIS(A);
//     }
    
//     int LAIS(vector<int>&A)
//     {
//         int TAG = 500;
//         vector<vector<int>>dp(A.size(),vector<int>(2*(TAG+1),1));
//         int maxL = 1;
//         int n = A.size();
//         int diff;
//         for(int i= 1;i<n;i++)
//         {
//             for(int j=0;j<i;j++)
//             {
//                 diff = A[i]-A[j] + TAG;
//                 dp[i][diff] = max(dp[i][diff],dp[j][diff] + 1);
//                 maxL = max(maxL,dp[i][diff]);
//             }
//         }
        
//         return maxL;
//     }
// };