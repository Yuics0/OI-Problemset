#include <cstdio>

int n, m, t, ans;
int sx, sy, fx, fy;
int rbx, rby;
int f[50][50];

void dfs(int x, int y) {
	if (x < 1 || x > n)
		return;
	if (y < 1 || y > m)
		return;
	if (x == fx && y == fy) {
		ans++;
		return;
	}
	if (f[x][y] == 1 || f[x][y] == -1)		// 走过了和有路障
		return;

	f[x][y] = 1;
	dfs(x, y + 1);
	dfs(x, y - 1);
	dfs(x - 1, y);
	dfs(x + 1, y);
	f[x][y] = 0;
}

int main() {
	scanf("%d %d %d", &n, &m, &t);
	scanf("%d %d %d %d", &sx, &sy, &fx, &fy);
	for (int i = 1; i <= t; i++) {
		scanf("%d %d", &rbx, &rby);
		f[rbx][rby] = -1;
	}
	if (f[fx][fy] == -1) {
		printf("0\n");
		return 0;
	}
	dfs(sx, sy);
	printf("%d\n", ans);
	return 0;
}
