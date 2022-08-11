#include <iostream>
#include <algorithm>
#include <vector>

namespace programNamespace {
    const int MAXN = 0x7fffff;
    using namespace std;
    vector<int> vec;
    int n, k, a[MAXN];

    int main() {
        ios::sync_with_stdio(false);
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++) {
            while (!vec.empty() && a[i] > vec.back() && a[i] <= vec.back() + k)
                vec.pop_back();
            vec.push_back(a[i]);
        }

        cout << vec.size() << endl;
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
