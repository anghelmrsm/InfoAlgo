class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin(),matrix.end());
        int n = matrix.size();
        int m = matrix[0].size();
        for(int x = 0 ; x < n ; x++)
            for(int j = x + 1 ; j < m ; j++)
                    swap(matrix[x][j],matrix[j][x]);
    }
};