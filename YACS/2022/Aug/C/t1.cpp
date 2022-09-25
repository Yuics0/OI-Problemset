#include <cstdio>

namespace Solution {
    int n;
    
    int main() {
        scanf("%d", &n);

        while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
                printf("%d ", n);
            } else {
                n = n * 3 + 1;
                printf("%d ", n);
            }
        }
        printf("\n");
        return 0;
    }
}

int main() {
    return Solution::main();
}
