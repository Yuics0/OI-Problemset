#include <cstdio>

namespace Solution {
    int n, a, b, sum = -1e9;

    int main() {
        scanf("%d", &n);
        while (n--) {
            scanf("%d", &a);
            if (b > 0) b += a;
            else b = a;
            if (b > sum) sum = b;
        }
        if (sum < 0) printf("%d", 0);
        else printf("%d", sum);
        return 0;
    }
}

int main() {
    return Solution::main();
}
