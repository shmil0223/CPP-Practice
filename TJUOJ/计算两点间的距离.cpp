//PREPEND BEGIN
#include <iostream>
#include <cmath>
using namespace std;
//PREPEND END

//TEMPLATE BEGIN
double get_dis(int x1,int y1,int x2,int y2) {
    // Please fill this blank
    return pow((pow((x1 - x2),2)+(pow((y1 - y2),2))),1/2.0);
}
//TEMPLATE END

//APPEND BEGIN
int main() {
    int x1,y1,x2,y2;
    while(cin>>x1>>y1>>x2>>y2){
        if(x1==0 && y1==0 && x2==0 && y2==0) break;
        /*In C++, when printing floating-point numbers:
        - `%f` is for `float` type
        - `%lf` is for `double` type

        In this code, `get_dis()` returns a `double`, so we need to use `%lf`. Using `%.2f` would still work because of implicit conversion, but `%.2lf` is more precise and technically correct for `double` values.

        This is especially important when:
        1. Reading doubles with scanf (must use `%lf`)
        2. Maintaining consistency with the variable type
        3. Avoiding potential precision issues

        So `%.2lf` is the better choice here.*/
    }
    return 0;
}
//APPEND END