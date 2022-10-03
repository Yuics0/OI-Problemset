#include <iostream>
#include <set>

int a[6];
std::set<int> s;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    for (int i = 1; i <= 5; i++)
        std::cin >> a[i];

    for (int i = 1; i <= 5 - 2; i++)
        for (int j = i + 1; j <= 5 - 1; j++)
            for (int k = j + 1; k <= 5; k++)
                s.insert(a[i] + a[j] + a[k]);
    
    auto it = s.end();
    it--, it--, it--;

    std::cout << *it << std::endl;
    return 0;
}
