#include <iostream>
#include <stack>

namespace Solution {
    char ch;
    int tmp;
    std::stack<int> s;

    int main() {
        std::ios::sync_with_stdio(false);
        while (true) {
            std::cin >> ch;
            if (ch == '@') break;
            if (ch == '.') {
                s.push(tmp);
                tmp = 0;
                continue;
            }

            if (ch >= '0' && ch <= '9') {
                tmp = tmp * 10 + (ch - '0');
                continue;
            }

            int i, j;
            i = s.top(), s.pop();

            j = s.top(), s.pop();

            if (ch == '+') s.push(j + i);
            else if (ch == '-') s.push(j - i);
            else if (ch == '*') s.push(j * i);
            else if (ch == '/') s.push(j / i);
        }

        std::cout << s.top() << std::endl;
        return 0;
    }
}

int main() {
    return Solution::main();
}
