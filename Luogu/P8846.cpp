#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

namespace Solution {
    int t, bucket[130];

    int main() {
        std::ios::sync_with_stdio(false);
        std::cin >> t;
        for (int z = 1; z <= t; z++) {
            memset(bucket, 0, sizeof(bucket));
            bool landlord = false;
            std::string s;
            std::cin >> s;
            for (int i = 0; i < s.length(); i++)
                bucket[s[i]]++;
            if (bucket['X'] > 0 && bucket['D'] > 0)
                landlord = true;
            for (int i = 1; i <= 127 && !landlord; i++) {
                if (bucket[i] >= 4)
                    landlord = true;
            }
            printf("%s\n", landlord ? "Yes" : "No");
        }
        return 0;
    }
}

int main() {
    return Solution::main();
}
