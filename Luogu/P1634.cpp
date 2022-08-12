#include <cstdio>

namespace programNamespace {
    unsigned long long n, x, monsters = 1;

    int main() {
        scanf("%lld %lld", &x, &n);
        for (int i = 1; i <= n; i++)
            monsters = monsters + monsters * x;
        printf("%lld\n", monsters);
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
