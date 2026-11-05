/*
Name:63
Auther:Watercold
Date:2026/10/18
*/

#include <stdio.h>

// 计算落在区间 (lo, hi] 内的计税部分（A <= lo 时为 0）
static int part(int a, int lo, int hi) {
    if (a <= lo)
        return 0;
    return a < hi ? a - lo : hi - lo;
}

int main(void) {
    // 工资计算：输入税前工资 S（整百数），输出税后工资 T
    int s;

    if (scanf("%d", &s) != 1)
        return 0;

    // 超过起征点 3500 元的部分
    int a = s - 3500;
    int tax = 0;

    // 个税分段累加：3%、10%、20%、25%、30%
    // S 为整百数时各档计税基数均为整百，税额必为整数，故全程用整数运算
    if (a > 0) {
        tax = part(a, 0, 1500) * 3 / 100
            + part(a, 1500, 4500) * 10 / 100
            + part(a, 4500, 9000) * 20 / 100
            + part(a, 9000, 35000) * 25 / 100
            + part(a, 35000, 1000000000) * 30 / 100;
    }

    printf("%d\n", s - tax);
    return 0;
}
