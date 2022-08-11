#include <iostream>
#include <string>
#include <unordered_map>

int k, pos, ans;
std::string userInput;
std::unordered_map<std::string, int> aMap;

namespace userNamespace {
    int main() {
        using namespace std;
        ios::sync_with_stdio(false);
        cin >> userInput;
        cin >> k;
        pos = userInput.size();
        for (int i = 0; i < pos - k + 1; i++)
            ++aMap[userInput.substr(i, k)];
        for (auto ip : aMap)
            ans = max(ans, ip.second);
        cout << ans << endl;
        return 0;
    }
}

int main() {
    return userNamespace::main();
}
