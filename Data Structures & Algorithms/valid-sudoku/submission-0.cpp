class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9),col(9);
        vector<vector<unordered_set<char>>> box(3,vector<unordered_set<char>>(3));
        for(int r=0;r<board.size();r++){
            for(int c=0;c<board[0].size();c++){
                if(board[r][c]!='.'){
                    if(row[r].contains(board[r][c])){
                        return false;
                    }
                    else{
                        row[r].insert(board[r][c]);
                    }
                    if(col[c].contains(board[r][c])){
                        return false;
                    }
                    else{
                        col[c].insert(board[r][c]);
                    }
                    if(box[r/3][c/3].contains(board[r][c])){
                        return false;
                    }
                    else{
                        box[r/3][c/3].insert(board[r][c]);
                    }
                }
            }
        }
        return true;
    }
};
