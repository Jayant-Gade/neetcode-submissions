class Solution {
    void recurse(vector<vector<char>>& board, string &word, int curr,bool &ans,int i,int j,set<tuple<int,int>> &seen){
        if(curr==word.size()) {
            ans=true;
        }
        if(ans) return;
        if(i+1<board.size()){
            if(board[i+1][j]==word[curr] && seen.count({i+1,j})==0){
                seen.insert({i+1,j});
                recurse(board,word,curr+1,ans,i+1,j,seen);
                seen.erase({i+1,j});
            }
        }
        if(i-1<board.size()){
            if(board[i-1][j] == word[curr] && seen.count({i-1,j})==0){
                seen.insert({i-1,j});
                recurse(board,word,curr+1,ans,i-1,j,seen);
                seen.erase({i-1,j});
            }
        }
        if(j+1<board[0].size()){
            if(board[i][j+1]==word[curr] && seen.count({i,j+1})==0){
                seen.insert({i,j+1});
                recurse(board,word,curr+1,ans,i,j+1,seen);
                seen.erase({i,j+1});
            }
        }
        if(j-1<board[0].size()){
            if(board[i][j-1]==word[curr] && seen.count({i,j-1})==0){
                seen.insert({i,j-1});
                recurse(board,word,curr+1,ans,i,j-1,seen);
                seen.erase({i,j-1});
            }
        }

    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        bool ans=false;
        set<tuple<int,int>> seen;
        for (int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    seen.insert({i,j});
                    recurse(board,word,1,ans,i,j,seen);
                    seen.erase({i,j});
                    if(ans){
                        return ans;
                    }
                }
            }
        }
        return ans;
    }
};
