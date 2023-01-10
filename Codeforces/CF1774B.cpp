#include <bits/stdc++.h>

using namespace std;
const int N = 100050;

int t, n, m, k;
int a[N];

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %d", &n, &m, &k);
        int l = (int) ceil(n * 1.0 / k), cnt = 0;
        bool flag = false;
        for (int i = 1; i <= m; i++) {
            scanf("%d", &a[i]);
            if (a[i] > l) flag = true;
            if (a[i] == l) cnt++;
        }
        if (flag == true) printf("NO\n");
        else if (cnt > (n - 1) % k + 1) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
