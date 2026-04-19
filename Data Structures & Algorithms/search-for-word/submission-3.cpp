class Solution {
public:

    bool find(vector<vector<char>>& b, string& w, int i,int j, int k, vector<vector<bool>> p){
        if(k == w.size())
        return true;
        int n = b.size();
        int m = b[0].size();
        if(i==-1 || j==-1 || i == n || j == m || p[i][j] || b[i][j]!=w[k]){
            return false;
        }

        p[i][j] = true;
        if(find(b,w,i+1,j,k+1,p)) return true;
        if(find(b,w,i-1,j,k+1,p)) return true;
        if(find(b,w,i,j-1,k+1,p)) return true;
        if(find(b,w,i,j+1,k+1,p)) return true;

        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        vector<vector<bool>>p(board.size(),(vector<bool>(board[0].size(),false)));
        for(int i =0 ;i< board.size(); i++){
            for(int j =0; j< board[0].size(); j++){
                if(find(board,word, i,j,0,p))
                    return true;
            }
        }
    return false;

    }
};
