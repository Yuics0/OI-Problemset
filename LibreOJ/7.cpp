#include <cstdio>

namespace programNamespace {
    unsigned long long ans, a;
    int main() {
        while (scanf("%lld", &a) != EOF)
            ans ^= a;
        printf("%lld\n", ans);
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
