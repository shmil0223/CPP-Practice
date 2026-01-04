#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 使用 vector 可以更灵活地管理内存，或者依旧使用全局数组
int main() {
    // 1. IO 加速
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    if (!(cin >> m >> n)) return 0;

    // 定义二维前缀和数组 p (prefix sum)
    // 大小开到 m+1, n+1 是为了方便处理边界（下标从1开始）
    // vector<vector<int>> 初始化默认为 0
    vector<vector<int>> p(m + 1, vector<int>(n + 1, 0));

    // 2. 输入并同时计算前缀和
    // 公式：当前位置前缀和 = 上 + 左 - 左上 + 当前值
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            int val;
            cin >> val;
            p[i][j] = p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1] + val;
        }
    }

    int k;
    cin >> k;

    int max_power = -1;

    // 3. 遍历所有划分的块
    // 注意：这里 i, j 表示的是每个 k*k 块的“右下角”坐标
    // 第一个块的右下角是 (k, k)，步长为 k
    for (int i = k; i <= m; i += k) {
        for (int j = k; j <= n; j += k) {
            
            // 利用公式 O(1) 计算当前块的和
            // 左上角坐标对应的索引是 (i-k, j-k)
            int current_block_sum = p[i][j] - p[i - k][j] - p[i][j - k] + p[i - k][j - k];
            
            if (current_block_sum > max_power) {
                max_power = current_block_sum;
            }
        }
    }

    cout << max_power << endl;

    return 0;
}