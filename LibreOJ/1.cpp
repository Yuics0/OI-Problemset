#include <cstdio>

namespace userNamespace {
    long long a, b;
    int main() {
        scanf("%lld %lld", &a, &b);
        printf("%lld\n", a + b);
        return 0;
    }
}

int main() {
    return userNamespace::main();
}
