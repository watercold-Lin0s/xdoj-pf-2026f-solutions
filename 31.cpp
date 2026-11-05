/*
Name:31
Auther:Watercold
Date:2026/10/25
*/

#include <stdio.h>

// 辗转相除法（欧几里得算法）：gcd(a, b) = gcd(b, a % b)，直到 b 为 0
int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main(void) {
    // 求两个非负整数的最大公约数
    int a, b;

    if (scanf("%d %d", &a, &b) != 2)
        return 0;

    // 容错：负数取其绝对值
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    printf("%d\n", gcd(a, b));
    return 0;
}
