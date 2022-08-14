#include <cstdio>
#include <cmath>

namespace programNamespace {
	int n, m, a;

	int main() {
		scanf("%d %d %d", &n, &m, &a);
		printf("%lld\n", (long long) (ceil(n / (double) a) * ceil(m / (double) a)));
		return 0;
	}
}

int main() {
	return programNamespace::main();
}
