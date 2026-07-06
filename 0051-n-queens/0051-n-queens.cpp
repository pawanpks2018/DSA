class Solution {
public:
    vector<vector<string>> result;

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        solve(board,0);
        return result;
    }
    void solve(vector<string> &board,int row){
        if(board.size()==row){
            result.push_back(board);
            return;
        }
        for(int i=0;i<board.size();i++){
            if(isvalid(board,row,i)){
            
            board[row][i]='Q';
            solve(board,row+1);
            board[row][i]='.';
            
            }
        }
    }
    bool isvalid(vector<string> &board,int row,int col){
        //looking upwards
        for(int i=row;i>=0;i--){
             if(board[i][col]=='Q') return false;
        }

        //looking diagonally lefr upwards
        for(int i=row,j=col;i>=0 && j<board.size();i--,j++){
            if(board[i][j]=='Q') return false;
        }

        for(int i=row,j=col;j>=0 && i>=0;i--,j--){
            if(board[i][j]=='Q') return false;
        }

        return true;
    }
};