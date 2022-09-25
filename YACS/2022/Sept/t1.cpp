#include <cstdio>

namespace Solution {
    int a, b;
    int c, s;

    int main() {
        scanf("%d %d", &a, &b);
        
        c = (a + b) * 2;
        s = a * b;

        printf("%d\n%d\n", c, s);
        return 0;
    }
}

int main() {
    return Solution::main();
}
