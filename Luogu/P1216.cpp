#include <cstdio>
#include <algorithm>

namespace Solution {
    int n;
    int mapf[1005][1005];

    int main() {
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j <= i; j++)
                scanf("%d", &mapf[i][j]);
        for (int i = n - 2; i >= 0; i--)
            for (int j = 0; j <= i; j++)
                mapf[i][j] += std::max(mapf[i + 1][j], mapf[i + 1][j + 1]);
        printf("%d\n", mapf[0][0]);
        return 0;
    }
}

int main() {
    return Solution::main();
}
