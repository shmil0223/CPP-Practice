//采用记录所有地毯的位置和尺寸的方法,从后往前检查覆盖情况，效率高
#include <iostream>
#include <vector>
using namespace std;

struct Carpet {
    int a, b, x, y;
};

int main() {
    int n;
    cin >> n;
    vector<Carpet> carpets(n);
    for(int i = 0; i < n; i++){
        cin >> carpets[i].a >> carpets[i].b >> carpets[i].x >> carpets[i].y;
    }
    int wx, wy;
    cin >> wx >> wy;

    int res = -1;
    for(int i = n-1; i >= 0; i--){
        if(wx >= carpets[i].a && wx <= carpets[i].a + carpets[i].x &&
           wy >= carpets[i].b && wy <= carpets[i].b + carpets[i].y){
            res = i+1; // 地毯编号从 1 开始
            break;
        }
    }
    cout << res;
    return 0;
}
