#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll n, k, a, b;
ll ans;

void work() {
    if (n < k) {    // 特殊情况
        printf("%lld\n", (n - 1) * a);  // 只能减到 n - 1
        exit(0);
    }

    while (n != 1) {
        // 首先要将数字减到能被 k 整除
        ans += n % k * a;
        n -= n % k;

        if (b < (n - n / k) * a) {  // 除法更优
            ans += b;
            n /= k;
        } else {        // 否则减法更优
            ans += (n - 1) * a;
            printf("%lld\n", ans);
            exit(0);
        }
    }
    printf("%lld\n", ans);
}

int main() {
    scanf("%lld %lld", &n, &k);
    scanf("%lld %lld", &a, &b);
    work();
    return 0;
}
