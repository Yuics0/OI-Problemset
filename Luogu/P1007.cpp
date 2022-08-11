#include <iostream>
#include <cmath>

using namespace std;
int n, l, pos, maxTime, minTime;

int main() {
    ios::sync_with_stdio(false);
    cin >> l >> n;
    for (int i = 1; i <= n; i++) {
        cin >> pos;
        maxTime = max(maxTime, max(l - pos + 1, pos));
        minTime = max(minTime, min(l - pos + 1, pos));
    }
    printf("%d %d\n", minTime, maxTime);
    return 0;
}
