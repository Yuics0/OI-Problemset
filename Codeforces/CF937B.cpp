#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll p, y;

int main() {
    scanf("%lld %lld", &p, &y);
    for (ll i = y; i > p; i--) {
        bool f = true;
        for (ll j = 2; j * j <= i; j++) {
            if (j > p) break;
            if (i % j == 0) {
                f = false;
                break;
            }
        }
        if (f == true) {
            printf("%lld\n", i);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
