// Time Taken(%):24ms
// Memory usage(%):10.2MB
// Your Name(optional):Aditya Upadhyay
class Solution {
public:
    int movesToChessboard(vector<vector<int>>& board) {
        //make sure that all row sum and column sum are same
        //property 1:
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                if(board[0][0]^board[i][0]^board[0][j]^board[i][j]) return -1;
            }
        }
        int N = board.size();
        //for row
        int row_sum=0;
        int col_sum=0;
        for(int i=0;i<board[0].size();i++){
            row_sum+=board[0][i];
            col_sum+=board[i][0];
        }
        if (row_sum != N / 2 && row_sum != (N + 1) / 2) return -1;
        if (col_sum != N / 2 && col_sum != (N + 1) / 2) return -1;
        //count number of swaps
        int row_swap=0;
        int col_swap=0;
        for(int i=0;i<board[0].size();i++){
            col_swap+=board[0][i]==i%2;
            row_swap+=board[i][0]==i%2;
        }
        if(N%2){
            if(row_swap%2)
            row_swap=N-row_swap;
            if(col_swap%2)
            col_swap=N-col_swap;
        }
        else{
            row_swap=min(N-row_swap,row_swap);
            col_swap=min(N-col_swap,col_swap);
        }
        return (row_swap+col_swap)/2;
    }
};