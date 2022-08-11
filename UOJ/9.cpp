#include <iostream>
#include <algorithm>
#include <string>

namespace programNamespace {
    using namespace std;
    int n;
    pair<int, string> p[100001];

    int main() {
        ios::sync_with_stdio(false);
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> p[i].second;
            p[i].first = p[i].second.size();
        }
        sort(p, p + n);
        for (int i = 0; i < n; i++)
            cout << p[i].second << endl;
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
