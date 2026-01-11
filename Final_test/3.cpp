#include <iostream>
using namespace std;
int sum(int n){
    if (n % 2 == 0)
    return n / 2 * (1 + n);
    else return (1 + n) / 2 * n;
    // --- or --- //
    // int sum = 0;
    // for(int i = 1; i <= n; i ++)
    // sum += i;
    // return sum;
}
double getSeriesValue(int n){
    if (n == 1) return 1.0;
    else return double(n)/sum(n) + getSeriesValue(n - 1);
}
int main(){
    int n;
    cin >> n;
    if(n < 1 or n > 10000)
    cout << "Invalid n!" << endl;
    else
    cout << getSeriesValue(n) << endl;
    return 0;
}