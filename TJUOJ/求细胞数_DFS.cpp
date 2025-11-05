#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y) {
    visited[x][y] = true;

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && grid[nx][ny] != '0') {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;
    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));

    for(int i = 0; i < n; i++) cin >> grid[i];

    int cell_count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] != '0' && !visited[i][j]){
                dfs(i, j);
                cell_count++;
            }
        }
    }
    cout << cell_count << endl;
    return 0;
}
