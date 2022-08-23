#include <cstdio>
#include <algorithm>

namespace Solution {
    int f[200001], n, a, b, pos;

    int main() {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a);
            if (a == 0) {
                scanf("%d", &b);
                pos++;
                f[pos] = std::max(f[pos - 1], b);
            }
            if (a == 1) if (pos != 0) pos--;
            if (a == 2) printf("%d\n", f[pos]);
        }
        return 0;
    }
}

int main() {
    return Solution::main();
}
