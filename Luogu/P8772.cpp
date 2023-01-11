#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
const ull N = 1e6 + 50;

ull n, ans;
ull a[N], sum[N];

int main() {
    scanf("%llu", &n);
    for (ull i = 1; i <= n; i++) {
        scanf("%llu", &a[i]);
        sum[i] = sum[i - 1] + a[i];
    }

    for (ull i = 1; i <= n - 1; i++)
        ans += a[i] * (sum[n] - sum[i]);
    printf("%llu\n", ans);
    return 0;
}
