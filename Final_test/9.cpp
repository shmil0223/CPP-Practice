#include <iostream>
using namespace std;

class F {
private:
    int *a;
    int n;
    void sort(int *a, int n);
    void swap(int *low, int *high);

public:
    F(int *a1, int n1) : a(a1), n(n1) {}
    void sort1() { sort(a, n); }
};

void F::sort(int *a, int n) {
    if (n == 1) return;
    int max_i = 0;
    int max_val = *a;
    for (int i = 0; i < n; i++)
        if (a[i] > max_val) {
            max_val = a[i];
            max_i = i;
        }
    swap(&a[max_i], a + n - 1);
    swap(a, a + n - 1);
    sort(a + 1, n - 1);
}

void F::swap(int *low, int *high) {
    int temp;
    while (low < high) {
        temp = *low;
        *low = *high;
        *high = temp;
        low++;
        high--;
    }
}

int main() {
    int a[] = {2, 5, 8, 4, 12, 63, 18, 73, 52, 31};
    F b(a, 10);
    b.sort1();
    for (int i = 0; i < 10; i++) cout << a[i] << " ";
    return 0;
}

