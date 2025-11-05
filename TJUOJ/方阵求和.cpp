#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int m;
    while(cin >> m){  // 读取到文件末尾
        vector<long long> result;
        vector<vector<long long>> a(m, vector<long long>(m));  // 使用vector替代变长数组
        long long r_sum, c_sum, sum1 = 0, sum2 = 0;
        
        // 输入矩阵并计算行和
        for(int i = 0; i < m; i++){
            r_sum = 0;
            for(int j = 0; j < m; j++){
                cin >> a[i][j];
                r_sum += a[i][j];
            }
            result.push_back(r_sum);
        }
        
        // 计算列和
        for(int i = 0; i < m; i++){
            c_sum = 0;
            for(int j = 0; j < m; j++){
                c_sum += a[j][i];
            }
            result.push_back(c_sum);
        }
        
        // 主对角线和
        sum1 = 0;
        for(int i = 0; i < m; i++){
            sum1 += a[i][i];
        }
        result.push_back(sum1);
        
        // 次对角线和
        sum2 = 0;
        for(int i = 0; i < m; i++){
            sum2 += a[i][m-1-i];
        }
        result.push_back(sum2);
        
        // 排序并输出
        sort(result.begin(), result.end(), greater<long long>());
        for(int i = 0; i < result.size()-1; i++){
            cout << result[i] << " ";
        }
        cout << result[result.size()-1] << endl;
    }
    return 0;
}