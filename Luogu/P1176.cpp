#include <cstdio>

namespace programNamespace {
	int n, m, x, y;
	int f[10005][10005];
	bool fix[10005][10005];

	int main() {
		scanf("%d %d", &n, &m);
		for (int i = 0; i < m; i++) {
			scanf("%d %d", &x, &y);
			fix[x][y] = true;
		}
		f[1][1] = 1;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++) {
				if (fix[i][j] || (i == j && i == 1))
					continue;
				f[i][j] = a[i - 1][j] + a[i][j - 1];
				a[i][j] %= 100003;
			}

		printf("%d\n", f[n][n] % 100003);
		return 0;
	}
}

int main() {
	return programNamespace::main();
}
