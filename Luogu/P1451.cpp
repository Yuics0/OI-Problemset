#include <cstdio>

namespace Solution {
    int n, m, ans;
    bool searched[105][105];
    int f[105][105];
    int deltax[] = {0, -1, 1, 0, 0};
    int deltay[] = {0, 0, 0, -1, 1};

    void dfs(int x, int y) {
        searched[x][y] = true;

        for (int i = 1; i <= 4; i++) {
            int sx = x + deltax[i];
            int sy = y + deltay[i];
            if (f[sx][sy] == 0 || searched[sx][sy])
                continue;
            dfs(sx, sy);
        }
    }

    int main() {
        scanf("%d %d", &n, &m);
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                scanf("%1d", &f[i][j]);
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                if (!searched[i][j] && f[i][j]) {
                    dfs(i, j);
                    ans++;
                }
        printf("%d\n", ans);
        return 0;
    }
}

int main() {
    return Solution::main();
}
