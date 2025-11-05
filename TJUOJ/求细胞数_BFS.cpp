#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void bfs(int x, int y) {
    queue<pair<int,int>> q;
    q.push({x, y});
    visited[x][y] = true;

    while(!q.empty()){
        auto [cx, cy] = q.front(); //结构化绑定
        /*
        传统写法：
        pair<int,int> p = q.front();
        int cx = p.first;
        int cy = p.second;
        */
        q.pop();

        for(int i = 0; i < 4; i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if(nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny] && grid[nx][ny] != '0'){
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    grid.resize(n);
    visited.assign(n, vector<bool>(m, false));//标记数组

    for(int i = 0; i < n; i++) cin >> grid[i];

    int cell_count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] != '0' && !visited[i][j]){
                bfs(i, j);
                cell_count++;
            }
        }
    }

    cout << cell_count << endl;
    return 0;
}
