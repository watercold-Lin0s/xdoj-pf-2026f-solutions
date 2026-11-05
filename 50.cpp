/*
Name:50
Auther:Watercold
Date:2026/10/25
*/

#include <stdio.h>

// 求一个数各位数字之和
int digitSum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main(void) {
    // 选号程序：在 n 个号码中选各位数字之和最大者，和相同时取数值较大者
    int n;

    if (scanf("%d", &n) != 1)
        return 0;

    int best = 0;
    int bestSum = -1;

    for (int i = 0; i < n; i++) {
        // 每个号码不超过 9 位，用 int 保存即可
        int x;
        if (scanf("%d", &x) != 1)
            break;

        int s = digitSum(x);
        // 数字之和更大，或之和相同但数值更大时，替换当前最优
        if (s > bestSum || (s == bestSum && x > best)) {
            bestSum = s;
            best = x;
        }
    }

    printf("%d\n", best);
    return 0;
}
