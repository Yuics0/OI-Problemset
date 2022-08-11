/*
 * @Author: Shay Xu 107915789+ShayXsy@users.noreply.github.com
 * @Date: 2022-07-13 19:27:29
 * @LastEditors: Shay shayxu217@outlook.com
 * @LastEditTime: 2022-07-14 10:36:47
 * @FilePath: \Luogu\P1059.cpp
 */
#include <iostream>
#include <set>

using namespace std;
set<int> s;
int a[1005], n;

int main() {
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
    cout << endl;
    return 0;
}
