class Solution {
public:
    
    bool isValid(int row, int col, char k, vector<vector<char>>& board)
    {
        for(int l=0;l<9;l++)
        {
            if(board[row][l]==k)
                return false;
            if(board[l][col]==k)
                return false;
            if(board[3*(row/3)+l/3][3*(col/3)+l%3]==k)
                return false;
        }
        return true;
}
    bool solve(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='.')
                   {
                       for(char k='1';k<='9';k++)
                       {
                            if(isValid(i,j,k,board))
                            {
                                board[i][j]=k;
                                if(solve(board))
                                    return true;
                                else
                                    board[i][j]='.';
                            }
                       }
                       return false;
                   }
            }
        }
                   return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};