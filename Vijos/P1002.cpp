#include <cstdio>
#include <algorithm>
#include <cstring>

#define For(i, l, r) for(int i=l;i<=r;i++)
#define M 100
#define L 2520

using namespace std;
int l, s, t, m, a[M + 1], stone[M * L + 1], f[M * L + 1];

int main() {
    scanf("%d%d%d%d", &l, &s, &t, &m);
    For(i, 1, m) scanf("%d", &a[i]);
    sort(a + 1, a + m + 1);
    For(i, 1, m) {
        a[i] = a[i - 1] + (a[i] - a[i - 1]) % L;
        stone[a[i]] = 1;
    }
    memset(f, 127, sizeof(f));
    f[0] = 0;
    For(i, s, M * L) {
        For(j, s, t) {
            if (i >= j) f[i] = min(f[i], f[i - j] + stone[i]);
        }
    }
    printf("%d\n", f[M * L]);
    return 0;
}
