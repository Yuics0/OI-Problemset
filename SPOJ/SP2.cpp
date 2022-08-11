#include <cstdio>

using namespace std;
int x, y;
int n;

bool prime(int a) {
    if (a == 1) return false;
    for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) return false;
    }
    return true;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &x, &y);
        for (int j = x; j <= y; j++) {
            if (prime(j)) printf("%d\n", j);
        }
        puts("");
    }
    return 0;
}
