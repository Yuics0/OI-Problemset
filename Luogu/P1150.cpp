/*
 * @Author: Shay shayxu217@outlook.com
 * @Date: 2022-07-14 16:35:26
 * @LastEditors: Shay shayxu217@outlook.com
 * @LastEditTime: 2022-07-14 11:06:17
 * @FilePath: /Luogu/P1150/P1150.cpp
 */
#include <iostream>
#include <cstdio>

using namespace std;
int n, k, cnt;

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> k;
    while (n)
    {
        cnt++;
        n--;
        if (cnt % k == 0)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
