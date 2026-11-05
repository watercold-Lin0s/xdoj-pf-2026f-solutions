/*
Name:32
Auther:Watercold
Date:2026/10/25
*/

#include <stdio.h>

int main(void) {
    // 角谷定理（3n+1 问题）：输入 n，输出 n 变为 1 所需的变换次数
    long long n;

    if (scanf("%lld", &n) != 1)
        return 0;

    // 中间结果可能超过 int 范围，因此用 long long 保存 n
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0)
            n /= 2;              // 偶数：折半
        else
            n = 3 * n + 1;       // 奇数：乘 3 加 1
        steps++;
    }

    printf("%d\n", steps);
    return 0;
}
