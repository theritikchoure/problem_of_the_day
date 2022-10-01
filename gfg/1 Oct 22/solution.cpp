#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void dfs(vector<vector<int>>& grid, int i, int j, vector<pair<int, int>>& temp) {
        if(i<0 || j<0 || i == grid.size() || j == grid[0].size() || grid[i][j] == 0) return;
        
        temp.push_back({i, j});
        
        grid[i][j] = 0;
        
        dfs(grid, i+1, j, temp); //down
         dfs(grid, i, j+1, temp); //right
        dfs(grid, i-1, j, temp); // up
        dfs(grid, i, j-1, temp); // left
    }
    
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        
        int row = grid.size(), col = grid[0].size();
        set<vector<pair<int, int>>> ans;
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(grid[i][j] == 1) {
                    vector<pair<int, int>> temp;
                    dfs(grid, i, j, temp);
                    
                    auto start = temp[0];
                    
                    for(auto &i: temp) {
                        i.first -= start.first;
                        i.second -= start.second;  
                    }
                    
                    if(ans.find(temp) == ans.end()) ans.insert(temp);
                }
            }
        }
        
        return ans.size();
    }
};


int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
