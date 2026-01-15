#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string str, sstr;
        cin >> str >> sstr;

        int count = 0;
        size_t loc = 0;
        while (loc < str.size()) {
            loc = str.find(sstr, loc);
            if (loc == string::npos) break; //ÕÒ²»µ½ ¡ú ·µ»Ø string::npos
            count++;
            loc++; 
        }
        cout << count << endl;
    }
    return 0;
}
