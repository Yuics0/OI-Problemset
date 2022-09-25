#include <cstdio>
#include <algorithm>

namespace Solution {
    unsigned long long x, y, a, b;

    int main() {
        scanf("%llu*%llu", &x, &y);
        a = x / std::__gcd(x, y);
        b = y / std::__gcd(x, y);
        printf("%llu:%llu\n", a, b);
        return 0;
    }
}

int main() {
    return Solution::main();
}
