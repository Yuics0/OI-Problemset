#include <iostream>

using namespace std;
int n;

int main() {
    ios::sync_with_stdio(false);
    scanf("%d", &n);
    if (n == 2) cout << "NO";
    else if (n % 2 == 0) cout << "YES";
    else cout << "NO";
    puts("");
    return 0;
}
