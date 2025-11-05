#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break; // 0 表示结束

        double sum = 0;
        int score, max_score = INT_MIN, min_score = INT_MAX;

        // 输入 n 个分数
        for (int i = 0; i < n; i++) {
            cin >> score;
            sum += score;
            if (score > max_score) max_score = score;
            if (score < min_score) min_score = score;
        }

        // 计算去掉一个最高和一个最低后的平均分
        double avg = (sum - max_score - min_score) / (n - 2);

        // 输出保留两位小数
        cout << fixed << setprecision(2) << avg << endl;
    }

    return 0;
}

//反思：输出样例中的并非一下子都输出，可以看作是输入一次，输出一次，这样就避免了使用二维数组