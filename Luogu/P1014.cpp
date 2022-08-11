#include <cstdio>

int n, k = 1;

int main() {
    scanf("%d", &n);
    while (n > k) {
        n -= k;
        k++;
    }
    if (k % 2 == 0) printf("%d/%d\n", n, (k + 1 - n));
    else printf("%d/%d\n", k + 1 - n, n);
    return 0;
}
