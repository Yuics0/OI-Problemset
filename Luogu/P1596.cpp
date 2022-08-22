#include <iostream>

namespace programNamespace {
	using namespace std;
	int n, m, ans;
	char field[105][105];

	int fx[9] = {0, -1, -1, -1, 0, 0, 1, 1, 1};
	int fy[9] = {0, -1, 0, 1, -1, 1, -1, 0, 1};

	void dfs(int x, int y) {
        int fr, fl;
        field[x][y] = '.';
        for (int i = 1;i <= 8;i++) {
            fr = x + fx[i];
            fl = y + fy[i];
            if (fr < 1 || fr > n || fl < 1 || fl > m || field[fr][fl] == '.')
                continue;
            field[fr][fl] = '.';
            dfs(fr, fl);
        }
    }

	int main() {
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				cin >> field[i][j];
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				if (field[i][j]=='W') {
					ans++;
					dfs(i, j);
				}
		printf("%d\n", ans);
		return 0;
	}
}

int main() {
	return programNamespace::main();
}
