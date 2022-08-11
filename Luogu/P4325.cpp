#include <cstdio>

int a[155], b[155], cnt;

int main() {
    for (int i = 1; i <= 10; i++) {
        scanf("%d", &a[i]);
        b[a[i] % 42]++;
    }
    for (int i = 0; i < 42; i++)
        if (b[i] > 0)
            cnt++;
    printf("%d\n", cnt);
    return 0;
}
