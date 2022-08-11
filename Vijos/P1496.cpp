#include <iostream>

using namespace std;
int n, ans;
int d[2500] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
    cin >> n;
    for (int i = 10; i <= 2000; i++)
        d[i] = d[i / 10] + d[i % 10];
    for (int i = 0; i <= 1000; i++)
        for (int j = 0; j <= 1000; j++)
            if (d[i] + d[j] + d[i + j] + 4 == n)
                ans++;
    cout << ans;
    return 0;
}
