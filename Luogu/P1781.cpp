#include <iostream>
#include <algorithm>

using namespace std;
int n;
struct node {
    int id{};
    long long score{};
    friend bool operator < (node a, node b){
        if (a.score != b.score) return a.score > b.score;
        else return a.score == b.score;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    struct node a[n + 1];
    for (long long i = 1; i <= n; i++) {
        cin >> a[i].score;
        a[i].id = i;
    }
    sort(a + 1, a + n + 1);
    cout << a[n + 1].id << endl << a[n + 1].score << endl;
    return 0;
}
