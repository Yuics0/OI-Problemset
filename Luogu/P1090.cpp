#include <bits/stdc++.h>

int n, t, ans;
std::priority_queue< int, std::vector<int>, std::greater<int> > q;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    std::cin >> n;
    for (int i = 1; i <= n; i++)
        std::cin >> t, q.push(t);
    
    while (q.size() >= 2) {
        int a = q.top();
        q.pop();

        int b = q.top();
        q.pop();

        ans += a + b;
        q.push(a + b);
    }

    std::cout << ans << std::endl;
    return 0;
}
