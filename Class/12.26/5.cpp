#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;  // 输入样例个数
    while (T--) {
        int n;
        cin >> n;  // 田地的块数
        vector<int> crops(n);
        int total_sum = 0;

        // 输入粮食产量并计算总和
        for (int i = 0; i < n; i++) {
            cin >> crops[i];
            total_sum += crops[i];
        }

        // 如果总和是奇数，直接输出NO
        if (total_sum % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        int target = total_sum / 2;

        // 使用位掩码枚举所有可能的分配情况
        bool can_partition = false;
        for (int mask = 0; mask < (1 << n); mask++) {
            int current_sum = 0;
            // 通过掩码检查分配
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    current_sum += crops[i];
                }
            }
            if (current_sum == target) {
                can_partition = true;
                break;
            }
        }

        if (can_partition) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
