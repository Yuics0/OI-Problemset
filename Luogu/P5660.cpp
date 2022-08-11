#include <iostream>
#include <string>

using namespace std;
string s;
int cnt;

int main() {
    ios::sync_with_stdio(false);
    cin >> s;
    for (int i = 0; i <= s.length(); i++)
        if (s[i] == '1') cnt++;
    cout << cnt << endl;
    return 0;
}
