#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>

namespace programNamespace {
    using namespace std;
    vector<int> v;
    int n;

    int main() {
        ios::sync_with_stdio(false);
        cin >> n;
        for (int i = 1; i <= n; i++)
            v.push_back(i);
        do {
            for (int i = 0; i < n; i++)
                cout << setw(5) << v[i];
            cout << endl;
        } while (next_permutation(v.begin(), v.end()));
        return 0;
    }
}

int main() {
    return programNamespace::main();
}
