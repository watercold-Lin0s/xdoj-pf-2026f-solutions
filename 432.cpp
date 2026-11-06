/*
Name:432
Auther:Watercold
Date:2026-11-06
*/

#include <stdio.h>

int main(void) {
    // 整数位数计算：求 n 的位数，题目约定 0 <= n <= 100000000
    int n;

    if (scanf("%d", &n) != 1)
        return 0;

    // 容错：负数取其绝对值，符号不算一位
    if (n < 0)
        n = -n;

    // 0 本身就是一位；其余每除掉一个 10 就多一位
    int digits = 0;
    do {
        digits++;
        n /= 10;
    } while (n > 0);

    printf("%d\n", digits);
    return 0;
}
