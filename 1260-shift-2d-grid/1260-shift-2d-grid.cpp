class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int totalElements = m * n;
        
        // If k is a multiple of totalElements, the grid looks exactly the same
        k = k % totalElements;
        if (k == 0) return grid;
        
        // Create a new grid of the same dimensions to store the result
        vector<vector<int>> result(m, vector<int>(n, 0));
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // Find the current 1D index of the element
                int current_1d_index = i * n + j;
                
                // Calculate the new 1D index after shifting k times
                int new_1d_index = (current_1d_index + k) % totalElements;
                
                // Convert the new 1D index back to 2D grid coordinates
                int new_i = new_1d_index / n;
                int new_j = new_1d_index % n;
                
                // Place the element in its new position
                result[new_i][new_j] = grid[i][j];
            }
        }
        
        return result;
    }
};