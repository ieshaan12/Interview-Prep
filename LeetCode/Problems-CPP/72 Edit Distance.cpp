// Time Taken(%):46.90%
// Memory usage(%):9MB
// Your Name(optional):Aditya Upadhyay
class Solution {
public:
    int minDistance(string word1, string word2) {
        // int arr[word1.size()+1][word2.size()+1]={0};
        vector<vector<int>> arr(word1.size()+1,vector<int>(word2.size()+1,0));
        for(int i=0;i<word1.size()+1;i++){
            arr[i][0]=i;
        }
        for(int j=0;j<word2.size()+1;j++){
            arr[0][j]=j;
        }
        for(int i=1;i<word1.size()+1;i++){
            for(int j=1;j<word2.size()+1;j++){
                // cout << i << j << endl;
                int c;
                if(word1[i-1]==word2[j-1])  c=0;
                else c=1;
                arr [i][j]=min(arr[i-1][j]+1,min(arr[i][j-1]+1,arr[i-1][j-1]+c));
            }
        }
        return arr[word1.size()][word2.size()];
    }
};