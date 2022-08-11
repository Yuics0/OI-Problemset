#include <iostream>

namespace programNamespace {
    using namespace std;
    int c[101];
    int main() {
        ios::sync_with_stdio(false);
        int n, s, h, a, b, i, t = 0;
        cin >> n >> s >> h >> i;
        h += i;
        for (i = 1; i <= n; i++) {
            cin >> a >> b;
            if (a <= h)
                c[b]++;
        }
        for (i = 0; i <= 100 && s >= 0; i++) {
            while (c[i]) {
                s -= i;
                t++;
                c[i]--;
                if (s < 0) {
                    t--;
                    break;
                }
            }
        }
        cout << t;
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
