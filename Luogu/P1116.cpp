/*
 * @Author: Shay Xu 107915789+ShayXsy@users.noreply.github.com
 * @Date: 2022-07-14 10:06:49
 * @LastEditors: Shay shayxu217@outlook.com
 * @LastEditTime: 2022-07-14 10:56:52
 * @FilePath: \Luogu\P1116.cpp
 */
#include <iostream>
#define CARS 10500

using namespace std;
int a[CARS], cnt;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[i] < a[j])
                ++cnt;
    cout << cnt << endl;
    return 0;
}
