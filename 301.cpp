/*
Name:301
Auther:Watercold
Date:2026/10/28
*/

#include <bits/stdc++.h>
using namespace std;

struct DivInfo {
    long long sum;  // 真约数和
    int count;      // 真约数个数
};

DivInfo getDivInfo(long long x) {
    long long sum = 0;
    int cnt = 0;

    for (long long i = 1; i * i <= x; ++i) {
        if (x % i == 0) {
            long long a = i;
            long long b = x / i;

            if (a != x) {
                sum += a;
                cnt++;
            }
            if (b != x && b != a) {
                sum += b;
                cnt++;
            }
        }
    }

    return {sum, cnt};
}

int main() {
    // 亲和数判断：两数的真约数和分别等于对方时输出 yes，并输出各自的真约数个数
    long long n, m;
    cin >> n >> m;

    auto d1 = getDivInfo(n);
    auto d2 = getDivInfo(m);

    if (d1.sum == m && d2.sum == n) {
        cout << "yes " << d1.count << " " << d2.count << endl;
    } else {
        cout << "no " << d1.count << " " << d2.count << endl;
    }

    return 0;
}
