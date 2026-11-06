/*
Name:444
Auther:Watercold
Date:2026-11-06
*/

#include <stdio.h>

int main(void) {
    // 圆周率计算：pi/4 = 1 - 1/3 + 1/5 - 1/7 + ... + (-1)^(n-1) * 1/(2n-1)
    // n 为数列项数，题目约定 1 <= n <= 10^8，浮点数按题意用 double
    int n;

    if (scanf("%d", &n) != 1)
        return 0;

    if (n < 1)
        return 0;

    // 逐项累加，符号按项号交替：奇数项为正，偶数项为负
    double sum = 0.0;
    double sign = 1.0;

    for (int i = 1; i <= n; i++) {
        sum += sign / (2 * i - 1);
        sign = -sign;
    }

    // pi 等于级数和的 4 倍，保留小数点后 6 位
    printf("%.6f\n", 4 * sum);
    return 0;
}
