#include <cstdio>

namespace programNamespace {
    int main() {
        printf("Hello, World!\n");
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
