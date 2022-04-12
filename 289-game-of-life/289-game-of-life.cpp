class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        const int rows = board.size();
        const int cols = board[0].size();
        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++){
                int liveneighbors = 0;
                
                for(int i = max(0, row - 1); i < min(row + 2, rows); i++){
                    for(int j = max(0, col - 1); j < min(col + 2, cols); j++){
                        liveneighbors += board[i][j] & 1;
                    }
                }
                if((liveneighbors == 4 && board[row][col]) || (liveneighbors == 3)){
                    board[row][col] |= 2;
                }
            }
        }
        for(int row = 0; row < rows; row++){
            for(int col = 0; col < cols; col++){
                board[row][col]  >>= 1;
            }
        }
    }
};