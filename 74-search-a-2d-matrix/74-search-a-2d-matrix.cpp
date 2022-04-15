class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        const int maxRows = matrix.size(), maxCols = matrix[0].size();
        int row = 0, col = 0;
        while (row < maxRows && col < maxCols)
        {
            if (matrix[row][col] == target) return true;
            if (row != maxRows - 1 && matrix[row + 1][col] <= target) ++row;
            else if (col != maxCols - 1 && matrix[row][col + 1] <= target) ++col;
            else return false;
        }
        return false;
    }
};