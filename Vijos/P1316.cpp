#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
set<int> s;
int a[0x7fff], n;

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << s.size() << endl;
    while (!s.empty()) {
        cout << *s.begin() << " ";
        s.erase(s.begin());
    }
    return 0;
}
