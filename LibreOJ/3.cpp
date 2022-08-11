#include <iostream>

namespace programNamespace {
    long long t;
    std::string a;
    int main() {
        std::ios::sync_with_stdio(false);
        freopen("copycat.in", "r", stdin);
        freopen("copycat.out", "w", stdout);
        std::cin >> t;
        for (auto i = 0; i < t; i++) {
            std::cin >> a;
            std::cout << a << std::endl;
        }
        return 0;
    }
} // namespace programNamespace

int main() {
    return programNamespace::main();
}
 