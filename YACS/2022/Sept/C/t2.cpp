#include <cstdio>
#include <algorithm>

namespace Solution {
    int n;
    int a, b, cnt[500005], resum, maxn;

    int main() {
        scanf("%d", &n);
        
        for (int i = 1; i <= n; i++) {
            scanf("%d %d", &a, &b);
            cnt[i] = a - b;
            maxn = std::max(maxn, cnt[i]);
            resum += b;
        }
        
        printf("%d\n", maxn + resum);
        return 0;
    }
}

int main() {
    return Solution::main();
}
