class Solution {// code sahi hai lekin ye dynamic method se solve hoga
public:
   int m,n,l;
   vector<vector<int>> directions={{0,1},{0,-1},{1,0},{-1,0}};

    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();

        n=board[0].size(); 
        l=word.size();

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && find(word,0,i,j,board) ) return true;
            }
        }
       return false;
    }

    bool find(string &word,int index,int i ,int j,vector<vector<char>>&board){
        if(index==l){
            return true;
        }

        if(i<0||i>=m||j<0||j>=n|| board[i][j]=='$'|| board[i][j] != word[index]) return false;

        char temp=board[i][j];
        board[i][j]='$';
        for(auto &dir:directions){
            int new_i=i+dir[0];

            int new_j=j+dir[1];
            if(find(word,index+1,new_i,new_j,board)) return true;
        }
        board[i][j]=temp;
        return false;


    }
};