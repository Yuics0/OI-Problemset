#include <iostream>
#include <algorithm>

using namespace std;
int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main() {
    for (int i = 1; i <= 362880; i++) {
        if (((a[0] * 100 + a[1] * 10 + a[2]) * 3 == (a[6] * 100 + a[7] * 10 + a[8])) &&
            ((a[0] * 100 + a[1] * 10 + a[2]) * 2 == (a[3] * 100 + a[4] * 10 + a[5]))) {
            for (int j = 0; j < 3; j++) cout << a[j * 3] << a[j * 3 + 1] << a[j * 3 + 2] << " ";
            cout << endl;
        }
        next_permutation(a, a + 9);     // 全排列
    }
    return 0;
}
