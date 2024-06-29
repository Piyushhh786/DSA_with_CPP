#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    typedef pair<int, int> p;

    void dfs(vector<vector<char>>& grid, int r, int c, unordered_set<p>& s) {
        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == '0' || s.find({r, c}) != s.end()) 
            return;
        s.insert({r, c}); // Mark current cell as visited
        dfs(grid, r+1, c, s); // Explore neighboring cells
        dfs(grid, r-1, c, s);
        dfs(grid, r, c+1, s);
        dfs(grid, r, c-1, s);
        return;
    }

    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        unordered_set<p> s;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (s.find({i, j}) == s.end() && grid[i][j] != '0') {
                    dfs(grid, i, j, s); // Start DFS from unvisited land cell
                    count++; // Increment island count
                }
            }
        }
        return count;
    }
};

int main() {
    Solution solution;

    // Test case grid
    vector<vector<char>> grid = {
        {'1', '1', '0', '0', '0'},
        {'1', '1', '0', '0', '0'},
        {'0', '0', '1', '0', '0'},
        {'0', '0', '0', '1', '1'}
    };

    // Calculate the number of islands
    int numIslands = solution.numIslands(grid);

    // Print the result
    cout << "Number of islands: " << numIslands << endl;

    return 0;
}
