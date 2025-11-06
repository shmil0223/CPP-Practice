#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double a, double b, double c, double d, double x) {
    return a * x * x * x + b * x * x + c * x + d;
}

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double roots[3];
    int cnt = 0;

    // 在 [-100, 100] 内寻找符号变化区间
    for (int i = -100; i < 100; i++) {
        double left = i, right = i + 1;
        double f1 = f(a,b,c,d,left);
        double f2 = f(a,b,c,d,right);
        if (f1 == 0) {
            roots[cnt++] = left;
        } else if (f1 * f2 < 0) {
            // 二分精确求根
            for (int k = 0; k < 100; k++) {
                double mid = (left + right) / 2;
                double fm = f(a,b,c,d,mid);
                if (f1 * fm <= 0)
                    right = mid;
                else
                    left = mid, f1 = fm;
            }
            roots[cnt++] = (left + right) / 2;
        }
        if (cnt == 3) break;
    }

    cout << fixed << setprecision(2);
    for (int i = 0; i < cnt; i++)
        cout << roots[i] << " ";
    cout << endl;
    return 0;
}
