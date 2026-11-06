/*
Name:29_2
Auther:Watercold
Date:2026-11-06
*/

#include <stdio.h>

int main(void) {
    // 计算整数各位数字之和，如 3704 -> 3+7+0+4 = 14
    // 题目约定 n 最多 9 位，用 int 保存不会溢出
    int n;

    if (scanf("%d", &n) != 1)
        return 0;

    // 容错：负数取其绝对值，负号不计入数字之和
    if (n < 0)
        n = -n;

    // 反复用 n % 10 取出最低位累加，再 n /= 10 去掉最低位，直到 n 为 0
    int sum = 0;
    while (n > 0) {
        sum += n % 10;       // 取出最低位并累加
        n /= 10;             // 去掉最低位
    }

    printf("%d\n", sum);
    return 0;
}
