#include <iostream>

using namespace std;

int main() {
    int k, sub1, sub2, sub3;
    bool isDigit = false;
    cin >> k;
    for (int i = 10000; i <= 30000; i++) {
        sub1 = i / 100;
        sub2 = (i % 10000) / 10;
        sub3 = i % 1000;
        if ((sub1 % k == 0) && (sub2 % k == 0) && (sub3 % k == 0)) {
            cout << i << endl;
            isDigit = true;
        }
    }
    if (!isDigit)
        cout << "No" << endl;
    return 0;
}
