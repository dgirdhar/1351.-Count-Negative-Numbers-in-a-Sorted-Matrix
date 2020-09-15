class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0;
        int size = grid.size();
        
        for (int i = 0; i < size; ++i) {
            int rowSize = grid[i].size();
            
            for (int j = 0; j < rowSize; ++j) {
                if (grid[i][j] < 0) {
                    count += rowSize - j;
                    break;
                }
            }
        }
        return count;
    }
};
