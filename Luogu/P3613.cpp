#include <iostream>
#include <vector>

namespace Solution {
    using namespace std;
    int n, q;
    int opr, i, j, k;

    int main() {
        ios::sync_with_stdio(false);
        cin >> n >> q;
        vector<vector<int>> locker(n + 1);
        for (int t = 1; t <= q; t++) {
            cin >> opr;
            if (opr == 1) {
                cin >> i >> j >> k;
                if (locker[i].size() < j + 1)   // 如果不够大
                    locker[i].resize(j + 1);    // 扩大新的寄包柜
                locker[i][j] = k;
            } else {
                cin >> i >> j;
                cout << locker[i][j] << endl;
            }
        }
        return 0;
    }
}

int main() {
    return Solution::main();
}
