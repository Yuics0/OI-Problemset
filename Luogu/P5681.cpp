#include <cstdio>
#include <cmath>

typedef unsigned long long ull;
ull a, b, c;

int main() {
    scanf("%lld %lld %lld", &a, &b, &c);
    if (pow(a, 2) > b * c) printf("Alice");
    else printf("Bob");
    puts("");
    return 0;
}
