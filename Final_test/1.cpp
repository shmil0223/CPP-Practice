#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
void fun (int input[9], int output[3][3]){
    sort(input, input + 9);
    int index = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) {
                output[i][j] = input[8];  // 中心放最大值
            } else {
                output[i][j] = input[index++];
            }
        }
    }
}

/*
    在 C/C++ 中，数组作为参数传递给函数时，
传递的实际上是数组的“首地址”（指针），而不是整个数组的副本。
    虽然写法看起来像是在传递一个值（int output[3][3]），但编译器实际上把它处理成了指针。
    因为函数拿到了原本数据的内存地址，所以它能直接修改 main 函数里那块内存中的数据。
*/

/*
    tips:
    如果是纯顺时针，代码应该这样写：
    顺序坐标: (0,0)->(0,1)->(0,2)->(1,2)->(2,2)->(2,1)->(2,0)->(1,0)
    int r[] = {0, 0, 0, 1, 2, 2, 2, 1};
    int c[] = {0, 1, 2, 2, 2, 1, 0, 0};

    for (int k = 0; k < 8; k++) {
        output[r[k]][c[k]] = input[k];
    }
*/
int main() {
    cout <<"请输入9个元素：" << endl;  
    int input[9], output[3][3];
    for(int i = 0; i < 9; i++) {
        cin >> input[i];
    }
    fun(input, output);
    cout <<"输出矩阵：" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout <<setw(4) << output[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}