#include <cstdio>

namespace programNamespace {
	int n;
	int f[10005];

	int main() {
		scanf("%d", &n);
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= i / 2; j++)
				f[i] += f[j];
			f[i]++;
		}
		printf("%d\n", f[n]);
		return 0;
	}
}

int main() {
	return programNamespace::main();
}
